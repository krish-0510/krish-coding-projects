#include<stdio.h>

void main()
{
    int i,j;

    printf("\n\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=11;j++)
        {
            if(j==3||j==5||j==7)
            printf(" * ");
            else if(i==1&&j==1)
            printf(" * ");
            else if(i==1&&j==2)
            printf(" * ");
            else if(i==1&&j==8)
            printf(" * ");
            else if(i==1&&j==9)
            printf(" * ");
            else if(i==5&&j!=1&&j!=2&&j==8&&j==9)
            printf(" * ");
            else if(i==5&&j==4||i==5&&j==6)
            printf(" * ");
            else 
            printf("   ");
        
        }
        printf("\n");
    }

    for(i=1;i<=6;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==5)
            printf(" * ");
            else
            printf("   ");
        }
        printf("\n");
    }



    printf("\n\n");
   
    printf("\n\n");
    printf("       OM NAMAH SHIVAY");
    printf("\n\n");
}