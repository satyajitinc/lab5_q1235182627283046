 #include<iostream>
using namespace std;
int main()
{
 float sp,cp,l,p;
 
 while(1)
 {
 cout<<"\n\nEnter The Selling Price \n";
 cin>>sp;

 cout<<"Enter The Cost Price \n";
 cin>>cp;

 if(cp>sp)
 {
  l=cp-sp;
  cout<<"\n\nLoss Is = "<<l;
 }
 else if(cp<sp)
 {
  p=sp-cp;
  cout<<"\nProfit Is = "<<p;
 }
 else 
 {
  cout<<"\nNo Profit No Loss\n"; 
 }
 }
 return 0; 
}
