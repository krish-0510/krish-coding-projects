#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int sum=1,count=1,i;
    char choice;
    // int a[50];
    
    // int num=rand()%6+1;

    // printf("Number on dice:%d",num);
    for(i=1;sum<=50;i++)
    {
        srand(time(0));
        int num=rand()%6+1;
        
        printf("\nNumber on dice:\t%d\n",num);

        sum=sum+num;
        //ladders
        {
            if(sum==3)
        {
            sum=sum+15;
            printf("Ladder encountered\n");
        }
        else if(sum==7)
        {sum=sum+19;
        printf("Ladder encountered\n");
        }
        else if(sum==12)
        {sum=sum+21;
        printf("Ladder encountered\n");}
        else if(sum==19)
        {sum=sum+4;
        printf("Ladder encountered\n");}
        else if(sum==24)
        {sum+=13;
        printf("Ladder encountered\n");}
        else if(sum==35)
        {sum=sum+12;
        printf("Ladder encountered\n");}
        else if(sum==38)
        {sum+=4;
        printf("Ladder encountered\n");}
        }


        //snakes
        {
             if(sum==49)
        {sum-=41;
        printf("Snake encountered\n");}
        else if(sum==48)
        {sum-=35;
        printf("Snake encountered\n");}
        else if(sum==45)
        {sum-=18;
        printf("Snake encountered\n");}
        else if(sum==41)
        {sum-=40;
        printf("Snake encountered\n");}
        else if(sum==21)
        {sum-=3;
        printf("Snake encountered\n");}
        else if(sum==25)
        {sum-=19;
        printf("Snake encountered\n");}
        else if(sum==44)
        {sum-=21;
        printf("Snake encountered\n");}

        }


        printf("New place:\t%d",sum);
        printf("\n");
        // printf("\ndo you want to continue(y/n):");
        // scanf("%c",&choice);

        
        // printf("\n");
    }
    printf("\nTotal number of dices rolled:%d",i-1);

    return 0;
}