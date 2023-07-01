#include<stdio.h>

void main()
{
    int i,j;

    // for(i=1;i<=15;i++)
    // {
    //     for(j=1;j<=7;j++)
    //     {
    //         if(j==4)
    //         printf(" * ");
    //         else if((i==2||i==6)&&j==5)
    //         printf(" * ");
    //         else if((i==3||i==5)&&j==6)
    //         printf(" * ");
    //         else if(i==4&&j==7)
    //         printf(" * ");
    //         else if((i==5||i==11)&&j==1)
    //         printf(" * ");
            
    //         else if((i==6||i==10)&&j==2)
    //         printf(" * ");
    //         else if((i==7||i==9)&&j==3)
    //         printf(" * ");
    //         else if((i==10||i==14)&&j==5)
    //         printf(" * ");
    //         else if((i==11||i==13)&&j==6)
    //         printf(" * ");
    //         else if(i==12&&j==7)
    //         printf(" * ");
    //         else 
    //         printf("   ");
    //     }
    //     printf("\n");
    // }

printf("\n\n");
    for(i=1;i<=13;i++)
    {
        for(j=1;j<=8;j++)
        {
            if(j==5)
            printf(" * ");
            else if((i==2||i==6||i==8||i==12)&&j==6)
            printf(" * ");
            else if((i==3||i==5||i==9||i==11)&&j==7)
            printf(" * ");
            else if((i==4||i==10)&&j==8)
            printf(" * ");
            else if((i==3||i==11)&&j==1)
            printf(" * ");
            else if((i==4||i==10)&&j==2)
            printf(" * ");
            else if((i==5||i==9)&&j==3)
            printf(" * ");
            else if((i==6||i==8)&&j==4)
            printf(" * ");
            else 
            printf("   ");
        }
        printf("\n");
    }

    printf("\n\n");

    // for(i=1;i<=13;i++)
    // {
    //     for(j=1;j<=8;j++)
    //     {
    //         if(i==3&&j==1&&j==7)
    //         printf(" * ");
    //         if(j==5)
    //         printf(" * ");
    //         else 
    //         printf("   ");
    //     }
    //     printf("\n");
    // }
}