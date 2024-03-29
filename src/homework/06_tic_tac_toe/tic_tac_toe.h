//h
#include<string>
#include<vector>
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
    string get_player() const{return player;};
    void display_board() const;


private:
    string player;
    vector<string>pegs{9 , " "};
    void clear_board(); 
    void set_next_player();

};


#endif