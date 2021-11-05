#include<stdio.h>
#include<conio.h>

int main()
{

    int i,j,k;
    int m=8;
    for(i=1;i<10;i++)
    {
        if(i<6)
        {
            for(j=5;j>i;j--)
            {
                printf(" ");
            }
            for(k=1;k<(i*2);k++)
            {
                printf("*");
            }
            printf("\n");
        }
        if(i>=6)
        {
            
           for(i = 1;i <= 4;i++)
            {
            for(j = 1;j <= i;j++)
            {
            printf("0");
            }
            for(k = i;k < m;k++)
            {
            printf("*");
            }
            m-=1;
            printf("\n");
            }
        }
    }
    return 0;
}