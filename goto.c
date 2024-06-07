#include <stdio.h>

int main(int argc, char const *argv[])
{
    //label://
   // printf("dev\n");

    //goto label;//

    int a;
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; i < 5; i++)
        {
            printf("the exit key is 0\n");
            scanf("%d",&a);
            if (a == 0)
            {
                goto end;
            }
            
            
        }
        
    }
    
    end:

    return 0;
}
