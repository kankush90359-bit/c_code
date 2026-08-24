#include<iostream>
using namespace std;
int main()
{
    int math,chem,eng,hindi,comp;
    
    cout<<"Enter marks of math subjects: ";   
    cin>>math;
    cout<<"Enter marks of chemistry subjects: ";
    cin>>chem;
    cout<<"Enter marks of english subjects: ";
    cin>>eng;
    cout<<"Enter marks of hindi subjects: ";
    cin>>hindi;
    cout<<"Enter marks of computer subjects: ";
    cin>>comp;
    int marks=math+chem+eng+hindi+comp;
    float percentage=(marks/5.0);
    cout<<"Total marks: "<<marks<<endl;
    cout<<"Percentage: "<<percentage<<endl;
}