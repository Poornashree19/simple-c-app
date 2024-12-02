/******************************************************************************

Stone,Paper,Scissor using NUmbers:

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
   int n,cmp,cp=0,up=0;
   srand(time(0));
   printf("There are 3 Rounds\n");
   printf("1-->Rock\n2-->Paper\n3-->Scissor\n");
   printf("Best of Luck!!!\n");
   printf("As your wish you start the game\n");
   for(int i=1;i<=3;i++){
   printf("Now , it's your turn:\n");
   scanf("%d",&n);
   if(n<1 ||n>3){
       printf("Invalid choice\n");
       return 0;
   }
   cmp=rand()%3+1;
     if(n==cmp){
       printf("Match Draw!!\n");
   }
   else{
       if(n==1 && cmp==2){
           printf("Computer Wins\n");
           cp++;
       }
       else if(n==2 && cmp==3){
           printf("Computer Wins\n");
           cp++;
       }
       else if(n==3 &&cmp==1){
           printf("Computer Wins\n");
           cp++;
       }
       else if(n==1 && cmp==3){
           printf("You Won the match\n");
           up++;
       }
       else if(cmp==2&& n==3 ){
           printf("You Won the match\n");
           up++;
       }
       else if(cmp==1 && n==2){
           printf("You Won the match\n");
           up++;
       }
   }
   }
   printf("----Final Score----\n");
   if(cp>up){
       printf("Computer's final Score-%d\n",cp);
       printf("Computer Wins!!!");
   }
   else if(cp==up){
       printf("Computer's final Score-%d\n",cp);
       printf("Your final Score-%d\n",up);
       printf("Match Draw\n");
   }
   else{
       printf("%d\n",up);
       printf("Luck is in your side!!! You Won the match\n");
   }
    return 0;
}