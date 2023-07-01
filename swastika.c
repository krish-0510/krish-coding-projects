#include<stdio.h>

void main()
{
    int i;
    int j;

    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i==1&&j==5)
            printf(" * ");
            else if(i==2&&j==4)
            printf(" * ");
            else if(i==3&&j==3||i==3&&j==7)
            printf(" * ");
            else if(i==4&&j==4||i==4&&j==6||i==4&&j==8)
            printf(" * ");
            else if(i==5&&j==1||i==5&&j==5||i==5&&j==9)
            printf(" * ");
            else if(i==6&&j==2||i==6&&j==4||i==6&&j==6)
            printf(" * ");
            else if(i==7&&j==3||i==7&&j==7)
            printf(" * ");
            else if(i==8&&j==6)
            printf(" * ");
            else if(i==9&&j==5)
            printf(" * ");
            else 
            printf("   ");
        }
        printf("\n");
    }
}