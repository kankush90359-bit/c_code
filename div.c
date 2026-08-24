#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the first and second number:");
    scanf("%d%d",&a,&b);
    if(b==0)
    {
    printf ("division is not posiible");
    }

    else{
        printf("division is %d",a/b);
    }

    return 0;

}