#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"enter the a which is base =";
  cin>>a;
  cout<<"enter the number which is power=";
  cin>>b;
   int ans=1;
   for(int i=1;i<=b;i++)
   {
    ans=ans*a;
    if(a==1)
     break;
   }
   if(a==0 && b==0)
    cout<<"indetermine it is not exist";
    else
    cout<<ans;


    return 0;
}