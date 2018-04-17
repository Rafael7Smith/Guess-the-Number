/* Rafael Smith, Ra760189 */
/* Homework #2 - 2 */
/* Guess the number */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned r;

int main()
{
  int i, g;
  char u[2];
  time_t t;

  void play();
  
  do {
   
   /* Generate and save Random # */
   srand((unsigned) time(&t)); 
   r = rand() % 1001;
   

   printf("I have a number between 1 and 1000.\nCan you guess my number?\n");
   
   play();
   
   printf("Excellent! You guessed the number!\n");
   printf("Would you like to play again (y or n)?\n");
   
   scanf(" %s", u);
   }
   while((u[0] != 'n') && (u[0] != 'N'));
   
   return 0;
}

void play() {
  unsigned g;
  
  for(; ; ) {
   
    scanf(" %d", &g); 
    if(g == r) {
      return;
    } else if(g < r) {
        printf("Too low. Try again.\n");
    } else if(g > r) {
        printf("Too high. Try again.\n");
    } else {
        printf("An error occured.");
    }
    printf("Please enter you next guess: ");
  }
}
