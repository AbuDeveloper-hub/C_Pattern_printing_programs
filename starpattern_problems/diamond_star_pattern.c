#include<stdio.h>
#include<conio.h>

int main()
{

    int i,j,k;
    int num=10;
    int m=8;
    for(i=1;i<=5;i++)
    {
        for(k=5;k>i;k--)
        {
            printf(" ");
        }
        for ( j = 1; j < i*2; j++)
        {
            printf("*");
        }
        printf("\n");
    }
      
    for(i = 1;i <= 4;i++)
    {
        for(j = 1;j <= i;j++)
        {
            printf(" ");
        }
        for(k = i;k < m;k++)
        {
            printf("*");
        }
         m-=1;
         printf("\n");
    }
    return 0;
}