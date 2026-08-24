#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is smallest number", b);

    }
    else if(b>a)
    {
        printf("%d is smallest number", a);
    }
    else{
        printf("the number is equal");
    }
    return 0;
} 