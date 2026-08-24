#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the number a ";
    cin>>a;
    cout<<"enter the number b ";
    cin>>b;
    cout<<"enter the number c ";
    cin>>c;
if(a+b>c && b+c>a && c+a>b)
{
    cout<<"it is a side of triangle ";
}
else{
    cout<<"it is not a side of triangle ";

}

return 0;
}