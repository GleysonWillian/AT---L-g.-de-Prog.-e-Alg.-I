#include <stdio.h>

int main()
{
    int vnum, vcont;

    printf("Tabuada de 1 a 10: \n");

    for (vnum = 1; vnum <= 10; vnum++)
    {
        for (vcont = 1; vcont <= 10; vcont++)
        {
            printf("%d x %d = %d \n", vnum, vcont, (vnum * vcont));
        }
        printf("\n");
    }
    return 0;
}