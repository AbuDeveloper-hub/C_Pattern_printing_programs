#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int i,j;
    for(i=69;i>=65;i--)
    {
        for(j=i;j<=69;j++)
        {
            printf(" %c ",i);
        }
        printf("\n");
    }
    return 0;
}
