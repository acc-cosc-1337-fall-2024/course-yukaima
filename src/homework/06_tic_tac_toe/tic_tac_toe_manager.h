//h
#include <vector>

#include "tic_tac_toe.h"

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class tictactoe_manager
{
public:
    void save_game(tictactoe b);
    void get_winner_total(int& o, int& x, int&t);

private:
    vector<tictactoe>games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;
    void update_winner_count(string winner);

};

#endif