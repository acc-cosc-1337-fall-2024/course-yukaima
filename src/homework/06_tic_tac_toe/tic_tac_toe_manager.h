//h
#include <vector>
#include <memory>


#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

using std::unique_ptr;

class tictactoe_manager
{
public:
    void save_game(unique_ptr<tictactoe>game);
    void get_winner_total(int& o, int& x, int&t);
    void display();

private:
    vector <unique_ptr<tictactoe>>games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    void update_winner_count(string winner);

};

#endif