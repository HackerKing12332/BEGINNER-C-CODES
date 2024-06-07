#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("enter the number \n");
    scanf("%d", &a);
    switch (a)
    {
    case 3:
        printf("age is 3");
        break;
    
    case 5:
        printf("age is 5");
        break;
    
    case 6:
        printf("age is 6");
        break;

    default:
          printf("age is not 3,5 or 6");
        break;
    }
    return 0;
}
