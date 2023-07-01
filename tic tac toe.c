#include<stdio.h>
void main()
{
    char i,j;
    char a[3][3];
    char p,q;
    for(i=0;i<3;i++)
    {
       

        for(j=0;j<3;j++)
        {
            
            if(i==j)
            {
                if(a[i][j]=='X')
                printf("X has won");
            }
            else if(a[0][0]==a[0][1]==a[0][2]=='X')
            printf("X has won");
            else if(a[1][0]==a[1][1]==a[1][2]=='X')
            printf("X has won");
            else if(a[2][0]==a[2][1]==a[2][2]=='X')
            
            printf("X has won");
            else if(a[0][0]==a[1][0]==a[2][0]=='X')
            printf("X has won");
            else if(a[0][1]==a[1][1]==a[2][1]=='X')
            printf("X has won");
            else if(a[0][2]==a[1][2]==a[2][2]=='X')
            printf("X has won");
        }
    }
}