
#include<iostream>
#include<string>

#include "tic_tac_toe.h"

using std::cout;
using std::cin;
using std::string;


int main() 
{
	tictactoe game;
	string first_player;
	char user_choice = 'y';

	do
	{
		cout<<"Enter first player's name: ";
		cin>>first_player;

		game.start_game(first_player);

		int position;

		while (game.game_over() == false)
		{
			cout<<"Enter a position: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();

		}
		
        cout<<"Play again? ( if yes, enter y or Y) ";
		cin>>user_choice;


	} 
	while (user_choice == 'y' || 'Y');
	

	return 0;
}