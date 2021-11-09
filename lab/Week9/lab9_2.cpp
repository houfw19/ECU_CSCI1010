// Walid Houf
// CSCI 1010 Section 001
// Lab 9
// Rock, Paper, Scissors

#include <iostream>

using namespace std;

int main()

{

	char Player1, Player2 ;

	cout << "\nPlayer 1, please show your choice: " << endl ;
    cin >> Player1 ;

	cout << "\nPlayer 2, please show your choice: " << endl ; 
	cin >> Player2 ;

	if ((Player1 == 'R' || Player1 == 'r') && (Player2 == 'P' || Player2 == 'p'))
    {

		cout << "\nPlayer 2 won!" << endl ;
		
	}

	else if ((Player1 == 'R' || Player1 == 'r') && (Player2 == 'R' || Player2 == 'r'))
	{

		cout << "\nIt's a tie!" << endl ;

	}

	else if ((Player1 == 'R' || Player1 == 'r') && (Player2 == 'S' || Player2 == 's'))
	{

		cout << "\nPlayer 1 won!" << endl;
		
	}

	else if ((Player1 == 'P' || Player1 == 'p') && (Player2 == 'P' || Player2 == 'p'))
	{

		cout << "\nIt's a tie!" << endl;
		
	}

	else if ((Player1 == 'P' || Player1 == 'p') && (Player2 == 'R' || Player2 == 'r'))
	{

		cout << "\nPlayer 1 won!" << endl;

	}

	else if ((Player1 == 'P' || Player1 == 'p') && (Player2 == 'S' || Player2 == 's'))
	{

		cout << "\nPlayer 2 won!" << endl;
		
	}

	else if ((Player1 == 'S' || Player1 == 's') && (Player2 == 'P' || Player2 == 'p'))
	{

		cout << "\nPlayer 1 won!" << endl;
		
	}

	else if ((Player1 == 'S' || Player1 == 's') && (Player2 == 'R' || Player2 == 'r'))
	{

		cout << "\nPlayer 2 won!" << endl;

	}

	else if ((Player1 == 'S' || Player1 == 's') && (Player2 == 'S' || Player2 == 's'))
	{

		cout << "\nIt's a tie!" << endl;

	}

	else
	{

		cout << "\nInvalid input, Game Over." << endl;

	}

}
