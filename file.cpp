#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter the number ";
    cin>>n;
    if(n<=1)
    {
        cout<<"it is not a prime number";
    }
    else{
    
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                cout<<"it is not a prime number";
                return 0;
            }
        }
        cout<<"it is a prime number";
    }
}