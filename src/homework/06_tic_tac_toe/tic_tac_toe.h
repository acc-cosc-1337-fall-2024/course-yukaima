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
    tictactoe(int size) : pegs(size * size, " ") {}
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const{return player;}
    void display_board(int choice) ;
    string get_winner() {return winner;};

protected:
    vector<string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();

private:
    string player;
    string winner;
    void clear_board(); 
    void set_next_player();
    bool check_board_full();
    void set_winner();

};


#endif