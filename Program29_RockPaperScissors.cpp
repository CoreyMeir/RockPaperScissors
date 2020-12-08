#include <iostream>
#include <time.h>
#include <string>

using namespace std;

bool playing = true;
string userChoice;
string computerChoice;
string result;
int winScore = 3;
int playerScore;
int computerScore;

void computerDecision(string computerChoice);
void resultOfRound(string userChoice, string computerChoice);

int main()
{
	int choice;
    
	while(playing)
	{
		cout << "Enter your selection: ";
		getline(cin, userChoice);
		cout << "\nYou chose: " << userChoice << endl;
		computerDecision(computerChoice);
		if (computerScore == winScore)
		{
			cout << "Unlucky you lost...\nGame Over..." << endl;
			cout << "Would you like to play again? 1.Yes 2.No " << endl;
			cin >> choice;
			if(choice == 1)
			{
				playing = true;
				computerScore = 0;
				playerScore = 0;
			}
			else
			{
				playing = false;
			}
			
		}
		else if (playerScore == winScore)
		{
			cout << "Congratulations you won...\nGame Over" << endl;
			cout << "Would you like to play again? 1.Yes 2.No " << endl;
			cin >> choice;
			if (choice == 1)
			{
				playing = true;
				computerScore = 0;
				playerScore = 0;
			}
			else
			{
				playing = false;
			}
		}
	}
}

void computerDecision(string computerChoice)
{
	srand(time(NULL));
	int randNum = (rand() % 3) + 1;
	if(randNum == 1)
	{
		computerChoice = "Paper";
		cout << "The computer chose: " << computerChoice << endl;
		resultOfRound(userChoice, computerChoice);
	}
	else if (randNum == 2)
	{
		computerChoice = "Scissors";
		cout << "The computer chose: " << computerChoice << endl;
		resultOfRound(userChoice, computerChoice);
	}
	else if (randNum == 3)
	{
		computerChoice = "Rock";
		cout << "The computer chose: " << computerChoice << endl;
		resultOfRound(userChoice, computerChoice);
	}
	else
	{
		cerr << "That didn't quite work";
	}
}

void resultOfRound(string userChoice, string computerChoice)
{
	if(userChoice == computerChoice) //If the choices are the same
	{
		cout << "It was a Draw\n" << endl;
		cout << "The computer is currently on: " << computerScore << ". They need " << winScore - computerScore << " to win.";
		cout << "\nYou are currently on: " << playerScore << ". You need " << winScore - playerScore << " to win.\n";
		cout << "------------------------------------------------------------------------------" << endl;
	}
	else if (userChoice == "Rock" && computerChoice == "Paper") //Start of if the computer wins the round
	{
		computerScore += 1;
		cout << "The computer took that round!\n" << endl;
		cout << "The computer is currently on: " << computerScore << ". They need " << winScore-computerScore << " to win.";
		cout << "\nYou are currently on: " << playerScore << ". You need " << winScore - playerScore << " to win.\n";
		cout << "------------------------------------------------------------------------------" << endl;
	}
	else if (userChoice == "Paper" && computerChoice == "Scissors")
	{
		computerScore += 1;
		cout << "The computer took that round!\n" << endl;
		cout << "The computer is currently on: " << computerScore << ". They need " << winScore - computerScore << " to win.";
		cout << "\nYou are currently on: " << playerScore << ". You need " << winScore - playerScore << " to win.\n";
		cout << "------------------------------------------------------------------------------" << endl;
	}
	else if (userChoice == "Scissors" && computerChoice == "Rock")
	{
		computerScore += 1;
		cout << "The computer took that round!\n" << endl;
		cout << "The computer is currently on: " << computerScore << ". They need " << winScore - computerScore << " to win.";
		cout << "\nYou are currently on: " << playerScore << ". You need " << winScore - playerScore << " to win.\n";
		cout << "------------------------------------------------------------------------------" << endl;
	}
	else if (userChoice == "Paper" && computerChoice == "Rock") //Start of if user wins the round
	{
		playerScore += 1;
		cout << "You won that round!\n" << endl;
		cout << "The computer is currently on: " << computerScore << ". They need " << winScore - computerScore << " to win.";
		cout << "\nYou are currently on: " << playerScore << ". You need " << winScore - playerScore << " to win.\n";
		cout << "------------------------------------------------------------------------------" << endl;
	}
	else if (userChoice == "Scissors" && computerChoice == "Paper")
	{
		playerScore += 1;
		cout << "You won that round!\n" << endl;
		cout << "The computer is currently on: " << computerScore << ". They need " << winScore - computerScore << " to win.";
		cout << "\nYou are currently on: " << playerScore << ". You need " << winScore - playerScore << " to win.\n";
		cout << "------------------------------------------------------------------------------" << endl;
	}
	else if (userChoice == "Rock" && computerChoice == "Scissors")
	{
		playerScore += 1;
		cout << "You won that round!\n" << endl;
		cout << "The computer is currently on: " << computerScore << ". They need " << winScore - computerScore << " to win.";
		cout << "\nYou are currently on: " << playerScore << ". You need " << winScore - playerScore << " to win.\n";
		cout << "------------------------------------------------------------------------------" << endl;
	}

	
}



