#include<stdio.h>
#include<conio.h>

int main()
{
/*     int i,j,k;    //variable declaration for loop variables

    for(i=1;i<=5;i++) //this loop printing five lines 
    {
        for(j=1;j<=i;j++) //this for printing patterns
        {
            printf("*");
        }
        for(k=5;k>=i;k--) //this for printing spaces
        {
            printf(" "); 
        }
        printf("\n"); //after the printing spaces and stars go to next line.
    } */

/*     int i,j,k;    //variable declaration for loop variables

    for(i=1;i<=5;i++) //this loop printing five lines 
    {
        for(k=5;k>i;k--) //this for printing spaces
        {
            printf(" "); 
        }
        for(j=1;j<=i;j++) //this for printing patterns
        {
            printf("*");
        }
        
        printf("\n"); //after the printing spaces and stars go to next line.
    } */

/*     int i,j,k;    //variable declaration for loop variables

    for(i=1;i<=5;i++) //this loop printing five lines 
    {
        for(j=5;j>=i;j--) //this for printing patterns
        {
            printf("*");
        }
        for(k=5;k>i;k--) //this for printing spaces
        {
            printf(" "); 
        }
        printf("\n"); //after the printing spaces and stars go to next line.
    } */

    int i,j,k;    //variable declaration for loop variables

    for(i=1;i<=5;i++) //this loop printing five lines 
    {
        for(k=1;k<i;k++) //this for printing spaces
        {
            printf(" "); 
        }
        for(j=i;j<=5;j++) //this for printing patterns
        {
            printf("*");
        }
        
        printf("\n"); //after the printing spaces and stars go to next line.
    }
    return 0;
}