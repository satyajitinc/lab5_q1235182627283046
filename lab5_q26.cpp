#include <iostream>                                  
using namespace std;                                 
int main()                                           
{                                                    
       int counter;
       // for loop condition for 0 to 100                                  
 for(counter=0; counter<=100; counter++)             
 {                    
        // check if reminder of number is not 0 then display value                               
     if(counter%2!=0)                                
  cout<<counter<<'\t';                               
 }                                                   
 cout<<endl;                                         
 return 0;                                           
 }      
