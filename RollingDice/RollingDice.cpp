/*
* Christopher Kelley
* 4-3 Final Project Building Block One: Programming (Rolling Dice)
* IT 312
* Southern New Hampshire University
* RollingDice.cpp : This file contains the 'main' function. Program execution begins and ends there.
*/

#include <iostream>
//Testing purposes
#include <ctime>
#include <time.h>
#include <stdlib.h>

using namespace std;


int main()
{
	
	/*
	Random Number Generator: Peer Tutoring pointers: 
	You'll get the same set of numbers unless you "seed" the RNG***
	https://stackoverflow.com/questions/70583385/how-does-the-function-time-work-with-with-srand-from-the-following-code
	https://stackoverflow.com/questions/4736485/srandtime0-and-random-number-generation
	https://stackoverflow.com/questions/65784211/why-use-time-in-srand
	https://cplusplus.com/reference/cstdlib/
	https://cplusplus.com/reference/cstdlib/rand/
	https://cplusplus.com/reference/cstdlib/srand/
	when
	*/
	//Random Number generator prior to input, seeds or "starts" the sequence before the number generation... I think! 
	srand((unsigned)time(0));
	//declare variables the user input,the two dice rolls and the sum of both dice.  
	int userNumber, dice1, dice2, diceSum;

	//Roll and roll2 variable holds the random value of each dice
	int roll;
	int roll2;

	//Num of times the dice are rolled before reaching target number 
	int numOfRolls = 1;

	// Welcome message to the user & letting them know what the program does 
	cout << "Hello! Welcome to Southern New Hampshire University's Dice Rolling C++ program!" << endl;
	cout << "You will choose a number between 2 and 12." << endl;
	cout << "The random number generator will continue Rolling two dice until the sum of both dice equals the number you provided!!!" << endl;
	cout << "Please enter a number between 2 and 12. ";

	cin >> userNumber;

	if (userNumber < 2 || userNumber > 12) {
		cout << "Incorrect input, please restart the program and read the welcome statement! program closing..." << endl;
		return 0;
	}
	else {
		//Both Roll variables are getting assigned a "side" of the dice, an integer between 1 through 6.
		/*
		int randNum = rand()%(max-min + 1) + min;
		 Peer Tutoring session note: 
		 https://stackoverflow.com/questions/18117582/picking-rand-number-from-1-6
		 https://stackoverflow.com/questions/4665832/c-random-number-w-range-of-1-6
		 https://stackoverflow.com/questions/4621191/c-random-number-1-9
		*/
		do {
			roll = rand() % 6 + 1;
			roll2 = rand() % 6 + 1;

			//declaring dice1 will get roll or (1st roll) and dice2 will get the second roll. Along with output to the user
			dice1 = roll;
			cout << "Your First dice roll is a " << dice1 << "." << endl;
			dice2 = roll2;
			cout << "Your Second dice roll is a " << dice2 << "." << endl;
			diceSum = dice1 + dice2;
			cout << "\nThe total of both your dice is " << diceSum << ".\n" << endl;
			cout << "Re-rolling dice until sum of both dice is equal to your number...\n" << endl;

			//Incrementing the number of rolls by 1
			numOfRolls++;
		} while (diceSum != userNumber);
	}
	// Print statement to user letting them know how many rolls it took to get the sum of the users number
	// Output to the screen letting the user or student know 
	cout << "The sum of both dice was equal to your number after " << numOfRolls << " dice rolls." << endl;
	return 0;

}