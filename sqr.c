#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf ("enter the number which you want to find the square of ");
    scanf("%d", &n);
    int root = sqrt(n);
    printf("the square root of %d is %d", n, root);
    return 0;
}