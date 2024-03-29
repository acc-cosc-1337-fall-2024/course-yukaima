//cpp
//public function
#include "tic_tac_toe.h"

//game_over
bool tictactoe::game_over()
{
    return false;  //return check_board_full function return value
}

//start_game
void tictactoe::start_game(string first_player)
{
    player = first_player;  //set player(private variable) to first_player function argument. 
    clear_board();  //Call the clear_board function
 
}

//mark_board
void tictactoe::mark_board(int position)
{
    pegs[position - 1] = player;  //Set the vector element at  (position -1) equal to the private player class variable
    set_next_player();  //Call set_next_player private function
}

//display_board
void tictactoe::display_board() const
{
    
}


//private function
//clear_board
void tictactoe::clear_board()
{
    for (auto& peg:pegs)
    {
        peg = " ";  //Set all 9 elements in private vector of string pegs variable to a " " (space)
    }
    
}

//set_next_player
void tictactoe::set_next_player()
{
    if (player == "x")  //If private variable player x player is y, elseplayer is x.
    {
        player = "y";
    }
    else
    {
        player = "x";
    }
    
}