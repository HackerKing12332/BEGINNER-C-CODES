#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter value of A: \n");
    scanf("%d", &a);
    printf("Enter the value of B: \n");
    scanf("%d", &b);
    printf("A AND B %d\n" , a&&b);
    printf("A OR B %d\n", a||b);
    printf("Not B %d\n", !b);

    return 0;
}
