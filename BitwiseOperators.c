#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;

    printf("enter a\n");
    scanf("%d" , &a);
    printf("enter b\n");
    scanf("%d" , &b);

    printf("A AND B %d\n", a&b);
   
    return 0;
}

