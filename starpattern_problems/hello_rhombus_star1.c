#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int i,j,n,k,num;
    num=5;
    n=num;

    for(i=0;i<num;i++)
    {
        for(k=n;k>0;k--)
        {
            printf(" ");
        }n--;
        for(j=0;j<num;j++)
        {
            if(i==0 || i==num-1)
            {
                printf("*");
                continue;
            }
            if(j==0 || j==num-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
