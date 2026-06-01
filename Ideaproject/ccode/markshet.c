#include<stdio.h>
int main()
{
    int math,phy,chem,eng,hindi,per;
    printf("enter the marks of math:");
    scanf("%d",&math);
    printf("enter the marks of science:");
    scanf("%d",&phy);
    printf("enter the marks of english:");
    scanf("%d",&eng);
    printf("enter the marks of social studies:");
    scanf("%d",&chem);
    printf("enter the marks of hindi:");
    scanf("%d",&hindi);
    printf("total marks is %d",math+phy+eng+chem+hindi);
    per=(math+phy+eng+chem+hindi)/5;
    printf("percentage is %d",per);
    return 0;
}