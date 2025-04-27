#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>




int main(void)
{

// Firstly, the computer will generate a random number.

	srand(time(NULL)); // Uses the current time as seed
	int computer_choice = (rand() % 3) + 1; // Picks a number between 1 and 3

// Next, the computer will ask the user for their choice

	char USER_CHOICE[10];
	printf("Choose rock, paper or scissors ");
	scanf("%9s", USER_CHOICE);

// The string will now be turned lowercase

	char user_choice;

    for (int i = 0; USER_CHOICE[i]; i++) {
        user_choice = tolower(USER_CHOICE[i]);
    }

// Now the two choices will be analyzed

	if (user_choice = "rock" && computer_choice == 1)
		printf("I chose rock, so it's a tie, and you obviously cheated\n");
	 else if (user_choice = "rock" && computer_choice == 2)
		printf("I chose paper, so I win\n");
	 else if (user_choice = "rock" && computer_choice == 3)
		printf("I chose scissors, so I lose, and you obviously cheated\n");
	 else if (user_choice = "paper" && computer_choice == 1)
		printf("I chose rock, so you win, and you obviously cheated\n");
	 else if (user_choice = "paper" && computer_choice == 2)
		printf("I chose paper, so it's a tie, and you obviously cheated\n");
	 else if (user_choice = "paper" && computer_choice == 3)
		printf("I chose scissors, so I win\n");
	 else if (user_choice = "scissors" && computer_choice == 1)
		printf("I chose rock, so I win\n");
	 else if (user_choice = "scissors" && computer_choice == 2)
		printf("I chose paper, so I lose, and you obviously cheated\n");
	 else if (user_choice = "scissors" && computer_choice == 3)
		printf("I chose scissors, so it's a tie, and you obviously cheated\n");
	 else
		printf("You suck at this\n");

}

