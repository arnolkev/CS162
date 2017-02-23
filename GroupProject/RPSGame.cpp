/*********************************************************************
 ** Author: Group 18
 ** Date: 2/26/2017
 ** Description: RPSGame.cpp is the RPSGame class implementation file.
 *********************************************************************/
#include "RPSGame.hpp"

/*********************************************************************
 ** Description: default constructor
 *********************************************************************/
RPSGame::RPSGame(){cout << "Welcome! \n";
		cout << "Do you want to set"
		cout <<	" different strengths for the tools? \n";
		cout << "1)yes 2)no \n";
		int choice1;
		choice1 = validNumInput();
		while (choice1 <= 0 || choice1 >=3)
		{
			cout << " Please choose a menu option \n";
			choice1 = validNumInput();
		}

		switch (choice1) {

		case 1: {
			cout << "What will be the strength of rock?";
			int rstr;
			rstr = validNumInput();
			Rock masterrock(rstr);

			cout << "What will be the strength of paper?";
			int pstr;
			pstr = validNumInput();
			Paper masterpaper(pstr);

			cout << "What will be the strength of scissors?";
			int sstr;
			sstr = validNumInput();
			Scissors masterscissors(sstr);

		
		}
		case 2:
		{
			Rock masterrock;
			Paper masterpaper;
			Scissors masterscissors;
		}}


/*********************************************************************
 ** Description: default destructor
 *********************************************************************/
RPSGame::~RPSGame(){}

/*********************************************************************
 ** Description: 
 ** Parameter: 
 ** Returns: 
 *********************************************************************/
void RPSGame::guess(){}

/*********************************************************************
 ** Description: 
 ** Parameter: 
 ** Returns: 
 *********************************************************************/
void RPSGame::endGame(){}

/*********************************************************************
 ** Description: 
 ** Parameter: 
 ** Returns: 
 *********************************************************************/
void RPSGame::round(){}

		   
		
int RPSGame::validNumInput()
{
	int x;
	cin >> x;
	while (x <= 0)
	{

		cin.clear();
		cin.ignore(100, '\n');
		cout << "Please enter a positive integer ";
		cin >> x;
	}
	return x;
}
	
