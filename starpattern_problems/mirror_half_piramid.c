#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int i,j,k;
    for(i=1;i<=10;i++)
    {
        if(i<=5)
        {
            for(j=5;j>i;j--)
            {
                printf(" ");
            }
            for(k=1;k<=i;k++)
            {
                printf("*");
            }
            printf("\n");
        }
       
       if(i>5 && i<=10)
       {
            for(i=5;i<=10;i++)
            {   
                for(j=5;j<=i;j++)
                {
                    printf(" ");
                }
                for(k=10;k>j;k--)
                {
                    printf("*");
                }
                printf("\n");
            }
         
       }
      
    }
    return 0;
}
