#include<stdio.h>
int main()
{
    float a,b,c,avg;
    printf("enter the three numbers:");
    scanf("%f%f%f",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("the average is:%f",avg);
    return 0;
}