// Write a c program for a matchstick game being played between the computer and a user. 
// Your program should ensure that the computer always wins.
// Rules for the game are as follows:
// There are 21 matchsticks.
// The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
// After the person picks, the customer does its picking.
// Whoever is forced to pick up the last matchstick loses the game.
// User and computer combination max of 5.




#include <stdio.h>

int main(){
    int n,cmp=0,total=21;
    for(int i=0;i<5;i++){
      printf("Pick the stick Max of 4\n");
      if(total!=1){
      scanf("%d",&n);
      }
      else{
          printf("Oops!!! You Loses\n");
          break;
      }
      cmp=5-n;
      printf("computer picks %d sticks\n",cmp);
      total-=5;
      printf("Balance sticks %d\n",total);
      
      
    }
    
    return 0;
}