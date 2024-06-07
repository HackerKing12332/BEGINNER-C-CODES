#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    do
    {
        i = i+1;
        printf("%d\n", i);
    } while (i<1000);
    
    return 0;
}
