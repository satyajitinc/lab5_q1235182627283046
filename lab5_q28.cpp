#include<iostream>
using namespace std;
int main()
{   int n;
    int sum=0,sum1=0;
 cout<<"enter the number of element"<<endl;
 cin>>n;
 for(int i=0;i<=n;i++)
  {
   if(i%2==0)
    {
       sum=sum+i;
    }
  }
  cout<<"sum of even number is = "<<sum<<endl;
 for(int i=0;i<=n;i++)
  {
   if(i%2!=0)
    {
        sum1=sum1+i;
    }
  }
  cout<<"sum of odd number is = "<<sum1;
}

