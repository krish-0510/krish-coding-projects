#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    srand(time(0));
    int n=rand()%100+1;
    int guess,i,nguesses=1;
    
    printf("%d",n);
    for(i=0;guess!=n;i++)
    {
        printf("enter your guess here:");
        scanf("%d",&guess);


        if(guess==n)
        {
                printf("your guess is correct\ntotal guesses:%d",nguesses);
        }
        else if(guess<n)
        printf("guess higher\n");
        else if(guess>n)
        printf("guess lower\n");
        nguesses++;
    }
}