
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));  // Random seed

    int num = rand() % 100 + 1;  // 1 se 100 ke beech
    if( num %2==0)
    


    printf("Random Number = %d", num);

    return 0;
}