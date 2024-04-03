//cpp
//public function
#include "tic_tac_toe.h"

using std::cout;

//game_over
bool tictactoe::game_over()
{
    bool game_result = false;

    if (check_column_win())
    {
        game_result = true;
    }
    else if (check_row_win())
    {
        game_result = true;
    }
    else if (check_diagonal_win())
    {
        game_result = true;
    }
    else if (check_board_full())
    {
        game_result = true;
        winner = "C";
    }
    

    return game_result;
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
    for (long unsigned int i = 0; i < pegs.size(); i += 3)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";  //display a tic tac toe board in 3x 3 format
    }
    
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////


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
    if (player == "X")  //If private variable player x player is y, elseplayer is x.
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
    
}

//check_board_full
bool tictactoe::check_board_full()
{
    for (long unsigned int i = 0; i < pegs.size(); i++)
    {
        if (pegs[i] == " ")
        {
            return false;
        }
        
    }
    return true;
}

//check_column_win
bool tictactoe::check_column_win()
 
{
    for (int i = 0;  i < 3; i++)
    {
        if (pegs[i] == "X" && pegs[i + 3] == "X" && pegs[i + 6] == "X")
        {
            return true;
        }
        if (pegs[i] == "O" && pegs[i + 3] == "O" && pegs[i + 6] == "O")
        {
            return true;
        }
    }

    return false;
}

//check_row_win
bool tictactoe::check_row_win()
{
    for (int i = 0;  i < 9; i = i+3)
    {
        if (pegs[i] == "X" && pegs[i + 1] == "X" && pegs[i + 2] == "X")
        {
            return true;
        }
        if (pegs[i] == "O" && pegs[i + 1] == "O" && pegs[i + 2] == "O")
        {
            return true;
        }
    }

    return false;
}

//check_diagonal_win
bool tictactoe::check_diagonal_win()
{
    if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
    {
        return true;
    }
    if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
    {
        return true;
    }
    if (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")
    {
        return true;
    }
    if (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")
    {
        return true;
    }
    

    return false;
}

void tictactoe::set_winner()
{
    if (player == "X") 
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }

}