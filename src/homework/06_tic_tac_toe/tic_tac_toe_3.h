//h
#include "tic_tac_toe.h"


class tictactoe3 : public tictactoe
{
public:
    tictactoe3():tictactoe(3){}

private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();

};