#include<stdio.h>

int main()
{
    int i,j;

    // for(i=1;i<=3;i++)
    // {
    //     for(j=1;j<=9;j++)
    //     {
    //         if(i==1&&j!=4&&j!=6&&j!=7&&j!=8)
    //         printf(" * ");
    //         else if(i==2&&j!=2&&j!=4&&j!=7)
    //         printf(" * ");
    //         else if(i==3&&j!=4&&j!=6&&j!=8)
    //         printf(" * ");
    //         else 
    //         printf("   ");

    //     }
    //     printf("\n");
    // }

printf("\n\n");
    // for(i=1;i<=3;i++)
    // {
    //     for(j=1;j<=23;j++)
    //     {
    //         if(i==1&&j!=2&&j!=4&&j!=5&&j!=7&&j!=8&&j!=10&&j!=11&&j!=12&&j!=14&&j!=15&&j!=17&&j!=18&&j!=20&&j!=21&&j!=22)
    //         printf(" * ");
    //         else if(i==2&&j!=4&&j!=8&&j!=11&&j!=14&&j!=16&&j!=18)
    //         printf(" * ");
    //         else if(i==3&&j!=2&&j!=5&&j!=6&&j!=7&&j!=10&&j!=12&&j!=15&&j!=16&&j!=17&&j!=20&&j!=21&&j!=22)
    //         printf(" * ");
    //         else 
    //         printf("   ");
    //     }
    //     printf("\n");
    // }

    printf("\n\n");
     for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i==1&&j!=6&&j!=8)
            printf(" * ");
        
            else if(i==2&&j==5||i==2&&j==7)
            printf(" * ");
            else if(i==3&&j==5||i==3&&j==7||i==3&&j==8||i==3&&j==9)
            printf(" * ");
            else if(i==4&&j==5)
            printf(" * ");
            else if(i==5)
            printf(" * ");
            else if(i==6&&j==5||i==6&&j==9)
            printf(" * ");
            else if(i==7&&j==5||i==7&&j==9)
            printf(" * ");
            else if(i==8&&j==5||i==8&&j==9)
            printf(" * ");
            
            // else if(i==9&&j!=6||i==9&&j!=7||i==9&&j!=8)
            // printf(" * ");
            else if(i==9&&j==1||i==9&&j==2||i==9&&j==3||i==9&&j==4||i==9&&j==5||i==9&&j==9)
            printf(" * ");
            else 
            printf("   ");
        }
        printf("\n");
    }

    
    return 0;
}