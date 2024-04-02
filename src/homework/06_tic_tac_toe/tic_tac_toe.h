//h
#include<string>
#include<vector>
#include<iostream>

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

using std::string;
using std::vector;


class tictactoe
{
public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const{return player;}
    void display_board() const;
    string get_winner() {return winner;};


private:
    string player;
    string winner;
    vector<string>pegs{9 , " "};
    void clear_board(); 
    void set_next_player();
    bool check_board_full();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();

};


#endif