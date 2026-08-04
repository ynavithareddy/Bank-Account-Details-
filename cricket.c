
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int player,computer,score=0;
    srand(time(0));
    while(1){
        printf("enter your number between 1-6\n");
        scanf("%d",&player);
        if(player<1||player>6){
            printf("invalid enter 1-6\n");
            continue;
            
        }
        computer=rand()%6+1;
        printf("computer choice :%d\n",computer);
        
    
        if(player==computer){
          printf("out\n");
          score+=player;
          printf("finalscore :%d\n",score);
          break;
        
    }
    score+=player;
    printf("your currert score: %d\n",score);
}
    return 0;
}
