#include <iostream>  
using namespace std;  
int main()  
{  
   int i,lol=1,pop;    
  cout<<"Enter any Number: ";    
 cin>>pop;    
  for(i=1;i<=pop;i++)
  {    
      lol=lol*i;    
  }    
  cout<<"Factorial of " <<pop<<" is: "<<lol<<endl;  
  return 0;  
}  
