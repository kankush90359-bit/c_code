#include<stdio.h>
int main()
{
    int n,r;
    printf("enter the number n");
    scanf("%d",&n);
    printf("enter the r ");
    scanf("%d",&r);
    int nfactr=1;
    int rfactr=1;
    int nrfactr=1;
    for(int i=2;i<=n;i++)
    {
      nfactr = nfactr*i;
    }
    for(int i=2;i<=r;i++)
    {
        rfactr = rfactr*i;
    }
    for(int i=2;i<=n-r;i++)
    {
        nrfactr = nrfactr*i;
    }
    int ncr = nfactr/(rfactr*nrfactr);
    printf("%d",ncr);
    return 0;

    
}

