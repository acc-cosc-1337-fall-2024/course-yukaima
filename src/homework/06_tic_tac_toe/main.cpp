
#include<iostream>
#include<string>

#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"


using std::cout;
using std::cin;
using std::string;
using std::make_unique;


int main() 
{
	tictactoe_manager manager;
	unique_ptr<tictactoe> game;
	string first_player;
	string winner;
	int choice;
	char user_choice = 'y';
	int o, x, t;


    cout<<"Choose 3*3 (enter 3) or 4*4 (enter 4) tictactoe game:";
	cin>>choice;


    if (choice == 3) {
        game = make_unique<tictactoe3>(); 
    } else if (choice == 4) {
        game = make_unique<tictactoe4>(); 
    }

	
	

	return 0;
}

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