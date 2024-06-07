#include <stdio.h>

int main(int argc, char const *argv[])
{   
    int a, i;
    printf("enter the number u want table for \n");
    scanf("%d", &a);
    i = 1;
    while(i<10){
        i = i + 1; 
        printf("%d\n",a * i);

    }
    return 0;
}
