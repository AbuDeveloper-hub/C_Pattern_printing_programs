#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k; //declaring variables
    for(i=1;i<10;i++)  // this loop is iterating 10 lines
    {
        if(i<=5) //to print first five lines
        {
            for(j=1;j<=i;j++) //this loop is for printing start
            {
                printf("*");
            }
            for(k=5;k>i;k--) //this loop is for printing spaces
            {
                printf(" ");
            }
            printf("\n");
        }
        if(i>5) //to print last five lines
        {
            for(j=i;j<10;j++) //this loop is for printing start
            {
                printf("*");
            }
            for(k=5;k<=10;k++) //this loop is for printing spaces
            {
                printf(" ");
            }
            printf("\n");
        }
       
    }


    return 0;
}