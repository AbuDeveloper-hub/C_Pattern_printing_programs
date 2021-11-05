/* #include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int i,j,k,num,n;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=((j*2)-1);k++)
        {
        
               printf("*");
            
            
        }
        
        printf("\n");
        
    }
    return 0;
}
 */

#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int i,j,k;

    for(i=5;i>=1;i--)
    {
        for(j=5;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=((i*2)-1);k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



















