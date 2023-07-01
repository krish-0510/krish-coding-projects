#include<stdio.h>
#include<stdlib.h>

void main()
{
    srand(time(0));
    int num=rand()%3+1;

    // printf("%d\n",num);
    
    char comp,me;
    if(num==1)
    comp='r';
    else if(num==2)
    comp='p';
    else if(num==3)
    comp='s';
    
    
    
    printf("enter r for rock,p for paper, s for scissor:");
    scanf("%c",&me);

    printf("computer chose:%c\n",comp);

    

     if(comp=='s'&&me=='s')
    printf("draw");
    else if(comp=='s'&&me=='p')
    printf("comp wins");
    else if(comp=='s'&&me=='r')
    printf("i win");

    if(comp=='r'&&me=='r')
    printf("draw");
    else if(comp=='r'&&me=='s')
    printf("comp wins");
    else if(comp=='r'&&me=='p')
    printf("i win");

    else if(comp=='p'&&me=='p')
    printf("draw");
    else if(comp=='p'&&me=='r')
    printf("comp wins");
    else if(comp=='p'&&me=='s')
    printf("i win");

    
}