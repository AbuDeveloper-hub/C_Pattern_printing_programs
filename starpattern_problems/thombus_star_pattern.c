#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int i,j,k;

    for(i=5;i>0;i--)
    {
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
/*     for(i=0;i<5;i++)
    {
        for(k=5-i;k != 0;k--)
        {
            printf(" ");
        }
        for(j=1;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    } */
    return 0;
}
