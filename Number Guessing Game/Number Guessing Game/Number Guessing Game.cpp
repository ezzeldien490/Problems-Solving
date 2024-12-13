#include "ReadNumber.h"
#include "GenerateRandom.h"



void StartGame()
{
	cout << "Welcome to the Number Gusseing Game!\n";
	int PlayerGuessNumber = ReadNumberBetweenRange("Guess a number between 1 and 100: ", 1, 100);
	int ComputerRandomNumber = RandomNumber(1, 100);
	short counter = 1;

	while (PlayerGuessNumber != ComputerRandomNumber)
	{
		if (PlayerGuessNumber > ComputerRandomNumber)
		{
			cout << "Too High!\n";
			PlayerGuessNumber = ReadNumberBetweenRange("Guess again: ", 1, 100);
		}
		else if (PlayerGuessNumber < ComputerRandomNumber)
		{
			cout << "Too Low!\n";
			PlayerGuessNumber = ReadNumberBetweenRange("Guess again: ", 1, 100);
		}

		counter++;
	}
	cout << "Correct! You Guessed the number in " << counter << " attempts. Congratulations!";
}


int main()
{
	srand((unsigned)time(NULL));
	StartGame();

	return 0;
}