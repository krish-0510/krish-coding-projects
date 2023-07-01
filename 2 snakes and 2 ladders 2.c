#include<stdio.h>

//user dice rolling


int main()
{
    int sum1=1,sum2=1;
    int i;
    int count1=0,count2=0;
    int num1,num2;
    
    for(i=1;sum1<=50,sum2<=50;i++)
    {
        if(i%2!=0)
        {   
            
            if(sum1>=50)
            {
                printf("Player 1 has won");
                break;
            }
            else if(sum2>=50)
            {
                printf("Player 2 has won");
                break;
            }
            else
            {
                
                printf("Enter roll for player 1:");
                scanf("%d",&num1);
                if(num1<1||num1>6)
                {
                    printf("Wrong choice, you lost your chance");
                    continue;
                }
                sum1+=num1;
                //sum1
                {
            //ladders
        if(sum1==3)
        {
            sum1=sum1+14;
            printf("Ladder encountered\n");
        }
        else if(sum1==7)
        {sum1=sum1+19;
        printf("Ladder encountered\n");
        }
        else if(sum1==12)
        {sum1=sum1+21;
        printf("Ladder encountered\n");}
        else if(sum1==19)
        {sum1=sum1+4;
        printf("Ladder encountered\n");}
        else if(sum1==24)
        {sum1+=13;
        printf("Ladder encountered\n");}
        else if(sum1==35)
        {sum1=sum1+12;
        printf("Ladder encountered\n");}
        else if(sum1==38)
        {sum1+=4;
        printf("Ladder encountered\n");}


        //snakes
        else if(sum1==49)
        {sum1-=41;
        printf("Snake encountered\n");}
        else if(sum1==48)
        {sum1-=35;
        printf("Snake encountered\n");}
        else if(sum1==45)
        {sum1-=18;
        printf("Snake encountered\n");}
        else if(sum1==41)
        {sum1-=40;
        printf("Snake encountered\n");}
        else if(sum1==21)
        {sum1-=3;
        printf("Snake encountered\n");}
        else if(sum1==25)
        {sum1-=19;
        printf("Snake encountered\n");}
        else if(sum1==44)
        {sum1-=21;
        printf("Snake encountered\n");}
    }
                count1++;

                printf("Player 1 postion: %d\n",sum1);
                printf("Player 2 postion: %d\n",sum2);
                printf("\n");
            }
        }
        else if(i%2==0)
        {
            if(sum2>=50)
            {
                printf("Player 2 has won");
                break;
            }
            else if(sum1>=50)
            {
                printf("Player 1 has won");
                break;
            }
            else
            {
                printf("Enter roll for player 2:");
                scanf("%d",&num2);
            
                if(num2<=0||num2>6)
                {
                    printf("Wrong choice, you lost your chance");
                    continue;
                }
                sum2+=num2;
                //sum2
                {
        //ladders
        if(sum2==3)
        {
            sum2=sum2+14;
            printf("Ladder encountered\n");
        }
        else if(sum2==7)
        {sum2=sum2+19;
        printf("Ladder encountered\n");
        }
        else if(sum2==12)
        {sum2=sum2+21;
        printf("Ladder encountered\n");}
        else if(sum2==19)
        {sum2=sum2+4;
        printf("Ladder encountered\n");}
        else if(sum2==24)
        {sum2+=13;
        printf("Ladder encountered\n");}
        else if(sum2==35)
        {sum2=sum2+12;
        printf("Ladder encountered\n");}
        else if(sum2==38)
        {sum2+=4;
        printf("Ladder encountered\n");}


        //snakes
        else if(sum2==49)
        {sum2-=41;
        printf("Snake encountered\n");}
        else if(sum2==48)
        {sum2-=35;
        printf("Snake encountered\n");}
        else if(sum2==45)
        {sum2-=18;
        printf("Snake encountered\n");}
        else if(sum2==41)
        {sum2-=40;
        printf("Snake encountered\n");}
        else if(sum2==21)
        {sum2-=3;
        printf("Snake encountered\n");}
        else if(sum2==25)
        {sum2-=19;
        printf("Snake encountered\n");}
        else if(sum2==44)
        {sum2-=21;
        printf("Snake encountered\n");}
    }
                count2++;

                printf("Player 1 postion: %d\n",sum1);
                printf("Player 2 postion: %d\n",sum2);
                printf("\n");
            }
        }    
    }
}
