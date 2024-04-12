
#include<iostream>
#include<string>

#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cout;
using std::cin;
using std::string;


int main() 
{
	tictactoe_manager manager;
	tictactoe game;
	string first_player;
	string winner;
	char user_choice = 'y';
	int o, x, t;

	do
	{
		cout<<"Enter first player's name(must be X or O): ";
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
        
		manager.save_game(game);
		manager.get_winner_total(o,x,t);

		winner = game.get_winner();

        cout<<"Winner is: "<<winner<<"\n";
		cout<<"O wins: "<<o<<"\n";
		cout<<"X wins: "<<x<<"\n";
		cout<<"ties: "<<t<<"\n";
        cout<<"Play again? ( if yes, enter y or Y) ";
		cin>>user_choice;


	} 
	while (user_choice == 'y' || user_choice == 'Y');
	

	return 0;
}