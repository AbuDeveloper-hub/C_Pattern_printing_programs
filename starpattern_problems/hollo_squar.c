#include<stdio.h>
#include<conio.h>

int main()
{
    
    int num,i,j;
    printf("Enter the value of num :");
    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
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
