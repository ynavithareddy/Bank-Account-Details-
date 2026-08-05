#include<stdio.h>
int main(){
    int p1,p2;
    while(1){
    printf("1.rock\n");
    printf("2.scissor\n");
    printf("3.paper\n");
    printf("enter p1 choice:");
    scanf("%d",&p1);
    printf("enter p2 choice:");
    scanf("%d",&p2);
    
    if(p1==p2){
        printf("draw\n");
        break;
    }
    else if((p1==1 && p2==3)||(p1==2 && p2==1)||(p1==3 && p2==2)){
        printf("p1 wins\n");
    }
    else if((p2==1 && p1==3)||(p2==2 && p1==1)||(p2==3 && p1==2)){
        printf("p2 wins\n");
    
    }else{
        printf("invalid choice\n");
        break;
    }
    }
     return 0;
}