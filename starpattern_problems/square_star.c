#include<stdio.h>
#include<conio.h>

int main(int argc, char const *argv[])
{
    int i,j,a,b;
    
    while(1)
    {
         printf("Enter the number of star print in a row :");
    scanf("%d",&a);

    printf("Enter the number of row print :");
    scanf("%d",&b);
    
    for(i=0;i<b;i++)
    {
        for(j=0;j<=a;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    }
   
    return 0;
}
