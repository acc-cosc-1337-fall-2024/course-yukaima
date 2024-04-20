//cpp
#include "tic_tac_toe_manager.h"

void tictactoe_manager::save_game(unique_ptr<tictactoe>& game) 
{
    update_winner_count(game->get_winner());
    games.push_back(std::move(game));
}

void tictactoe_manager::get_winner_total(int& o, int& x, int& t) 
{
    o = o_win;
    x = x_win;
    t = ties;
}

void tictactoe_manager::update_winner_count(std::string winner) 
{
    if (winner == "X") 
    {
        x_win++;
    } 
    else if (winner == "O") 
    {
        o_win++;
    } 
    else 
    {
        ties++;
    }
}