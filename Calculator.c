#include <stdio.h>
#include<math.h>


int add(int a,int b){
    int add=a+b;
    return add;
}

int sub(int a,int b){
    int sub=a-b;
    return sub;
}

int multi(int a,int b){
    int multi=a*b;
    return multi;
}

int div(int a,int b){
    int div=a/b;
    return div;
}


int main(){
   int num1,num2;
   char oper;
   printf("enter num1: ");
   scanf("%d",&num1);
   printf("enter operator(+, -): ");
   scanf(" %c",&oper);
   printf("enter num2: ");
   scanf("%d",&num2);
   
   
   if(oper == '+'){
      // add(num1,num2);
        printf("sum:%d",add(num1,num2));
   }
   else if(oper == '-'){
       printf("sub:%d",sub(num1,num2));
   }
   else if(oper == '*'){
       printf("multi:%d",multi(num1,num2));
   }
   else if(oper == '/'){
       printf("div:%d",div(num1,num2));
   }
   else{
       printf("invalid operator");
   }
   
return 0;
}