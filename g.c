#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        sum=sum+i;
    }
    printf("sum is %d",sum);
    return 0;

}