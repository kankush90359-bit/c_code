#include<stdio.h>
int sum(int a,int b)

{
    printf("sum is %d\n",a+b);
    return a+b;
    
}

int main()
{
    int a,b,c,d,e,f;
    printf("enter the number a   and b ");
    scanf("%d%d",&a,&b);
    printf("enter the number c  and d");
    scanf("%d%d",&c,&d);
    printf("enter the number e  and f");
    scanf("%d%d",&e,&f);
    sum(a,b);
    sum(c,d);
    sum(e,f);
    return 0;
}