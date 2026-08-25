#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the first number =";
    cin>>i;
    cout<<"enter the second number =";
    cin>>n;
    while(i<=n){
        if(i%2==0){
            cout<<i<<endl;
        }
        i++;
    }
}

