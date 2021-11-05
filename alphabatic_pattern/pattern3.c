#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int i,j;

    for(i=69;i>=65;i--)
    {
        for(j=69;j>=i;j--)
        {
            printf(" %c ",j);
        }
        printf("\n");
    }
    return 0;
}
