#include<stdio.h>

void pick();

void main() 
{ int player1,player2;
 
 printf("enter 1 for Scissors\n");
 printf("enter 2 for Rock\n"); 
 printf("enter 3 for paper\n");

 pick();

} 
void pick() 
{

  int player1,player2;
    
  printf("player 1 it is your turn\n "); 
  scanf("%d",&player1);
 
  printf("player 2 now it is your turn\n"); 
  scanf("%d",&player2);

 if(player1==player2)

 printf("it is a draw");
      
 else if(player1==1&&player2==2) 
      { 
          printf("player 2 wins");
      } 
 else if(player1==2&&player2==1) 
      { 
          printf("player 1 wins");
      }
 else if(player1==3&&player2==2)
      { 
          printf("player 1 wins"); 
      } 
 else if(player1==2&&player2==3) 
      {
          printf("player 1 wins");
      } 
 else if(player1==1&&player2==3)
      {
          printf("player 1 wins"); 
      } 
 else {  
       printf("player 2 wins");
      }
}
}
