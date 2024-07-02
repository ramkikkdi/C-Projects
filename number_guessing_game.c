// Include the pre-processor directives
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    // We need two numbers here one for random number generation and the other for the user input
    int random_number, user_number;
    int no_of_guess = 0;
    
    
    srand(time(NULL));

    printf("Welcome to the world of Guessing Numbers \n");
    random_number = rand() % 100 + 1; // Gnerating random number between 0 and 100

    do
    {
      printf("\nPlease input your guess between (1 and 100) : ");
      scanf("%d",&user_number);
      no_of_guess = no_of_guess + 1;

      if (user_number < random_number){

        printf("Please guess a larger number \n");

      }
      else if (user_number > random_number)
      {
        printf("Please guess a smaller number \n");
      }
      
      else {
       printf ("Congarts !! You have guessed it right in %d  times!!\n",no_of_guess);

      }

    } while (random_number !=user_number);
    
    printf ("\nBye!! Thank you for playing the game!!");
    printf("\nDeveloped by Ramakrishnan Mahesh");
    return 0;
}
