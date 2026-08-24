#include<iostream>
using namespace std;
int main ()
{
    int sp ,cp, profit , loss ;
    cout<<"enter the selling price ";
    cin>>sp;
    cout<<"enter the cost price";
    cin>>cp;
    profit = (sp-cp);
    loss = (cp - sp);
    if(sp>cp)
    {
        cout<<"it made a profit off";
        cout<<profit<<"rupees";

    }
    else if (cp>sp){
        cout<<"it made loss off  ";
        cout<<loss<<"rupees";
    }
    else{
        cout<<"no profit no loss";
    }
    return 0;

}