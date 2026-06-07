#include<stdio.h>
int main()
{
    int n;
    printf("enter the number  :");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("it is not prime number");
        return 0;

    }
    else if(n==2)
    {
        printf("it is prime number");
        return 0;
    }

    for(int i=2;i<n;i++)
    
    if(n%i==0){
        printf("it is not  prime number");
        return 0;
    }
    
        printf("it is  prime number");
        
    
    return 0;

}
