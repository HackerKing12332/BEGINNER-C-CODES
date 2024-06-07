#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    printf("enter i\n");
    scanf("%d", &i);
    for ( i ; i < 10; i++)
    {
        printf(" %d\n", i*23);

    }
    
    return 0;
}

