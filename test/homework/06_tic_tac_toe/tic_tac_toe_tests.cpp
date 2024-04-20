#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")
{
	unique_ptr<tictactoe> game;
	game = make_unique<tictactoe3>();

	game->start_game("X");

    REQUIRE(game->get_player() == "X");

}


TEST_CASE("Test first player set to O")
{
	unique_ptr<tictactoe> game;
	game = make_unique<tictactoe3>();

	game->start_game("O");

    REQUIRE(game->get_player() == "O");

}


TEST_CASE("Test if the bord is full")
{
	unique_ptr<tictactoe> game;
	game = make_unique<tictactoe3>();

	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");
	
}


TEST_CASE("Test win by first column")
{
	unique_ptr<tictactoe> game;
	game = make_unique<tictactoe3>();

	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test win by second column")
{
	unique_ptr<tictactoe> game;
	game = make_unique<tictactoe3>();

	game->start_game("X");

	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test win by third column")
{
	unique_ptr<tictactoe> game;
	game = make_unique<tictactoe3>();

	game->start_game("X");

	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test win by first row ")
{
	unique_ptr<tictactoe> game;
	game = make_unique<tictactoe3>();

	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test win by second row ")
{
	unique_ptr<tictactoe> game;
	game = make_unique<tictactoe3>();

	game->start_game("X");

	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test win by third row ")
{
	unique_ptr<tictactoe> game;
	game = make_unique<tictactoe3>();

	game->start_game("X");

	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test win diagonally from top left  ")
{
	unique_ptr<tictactoe> game;
	game = make_unique<tictactoe3>();

	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test win diagonally from bottom left ")
{
	unique_ptr<tictactoe> game;
	game = make_unique<tictactoe3>();

	game->start_game("X");

	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test get_winner function X win")
{
	unique_ptr<tictactoe> game;
	game = make_unique<tictactoe3>();

	game->start_game("X");

	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

}

TEST_CASE("Test get_winner function O win")
{
	unique_ptr<tictactoe> game;
	game = make_unique<tictactoe3>();

	game->start_game("O");

	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");

}

//get_winner == "C" already have.

TEST_CASE("Test get_winner_total X win")
{
	tictactoe_manager manager;
	unique_ptr<tictactoe> game;
	game = make_unique<tictactoe3>();

	game->start_game("X");

	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "X");

	int o,x,t;

    manager.save_game(game);
    manager.get_winner_total(o,x,t);
	REQUIRE(x == 1);

}

TEST_CASE("Test get_winner_total O win")
{
	tictactoe_manager manager;
	unique_ptr<tictactoe> game;
	game = make_unique<tictactoe3>();

	game->start_game("O");

	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "O");

	int o,x,t;

    manager.save_game(game);
    manager.get_winner_total(o,x,t);
	REQUIRE(o == 1);

}

TEST_CASE("Test get_winner_total tie")
{
	tictactoe_manager manager;
	unique_ptr<tictactoe> game;
	game = make_unique<tictactoe3>();

	game->start_game("X");

	game->mark_board(1);
	REQUIRE(game->game_over() == false);
	game->mark_board(2);
	REQUIRE(game->game_over() == false);
	game->mark_board(3);
	REQUIRE(game->game_over() == false);
	game->mark_board(4);
	REQUIRE(game->game_over() == false);
	game->mark_board(5);
	REQUIRE(game->game_over() == false);
	game->mark_board(7);
	REQUIRE(game->game_over() == false);
	game->mark_board(6);
	REQUIRE(game->game_over() == false);
	game->mark_board(9);
	REQUIRE(game->game_over() == false);
	game->mark_board(8);
	REQUIRE(game->game_over() == true);
	REQUIRE(game->get_winner() == "C");

	int o,x,t;

    manager.save_game(game);
    manager.get_winner_total(o,x,t);
	REQUIRE(t == 1);

}

TEST_CASE("Test get_winner_total 3 games")
{
	tictactoe_manager manager;

	unique_ptr<tictactoe> game1,game2,game3;
	game1 = make_unique<tictactoe3>();
	game2 = make_unique<tictactoe3>();
	game3 = make_unique<tictactoe3>();


	game1->start_game("X");
	game1->mark_board(7);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(2);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(6);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(3);
	REQUIRE(game1->game_over() == true);
	REQUIRE(game1->get_winner() == "X");
	manager.save_game(game1);

	game2->start_game("O");
	game2->mark_board(7);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(2);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(5);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(6);
	REQUIRE(game2->game_over() == false);
	game2->mark_board(3);
	REQUIRE(game2->game_over() == true);
	REQUIRE(game2->get_winner() == "O");
	manager.save_game(game2);

	game3->start_game("X");
	game3->mark_board(1);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(2);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(3);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(4);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(5);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(7);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(6);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(9);
	REQUIRE(game3->game_over() == false);
	game3->mark_board(8);
	REQUIRE(game3->game_over() == true);
	REQUIRE(game3->get_winner() == "C");
    manager.save_game(game3);

	int o,x,t;

    manager.get_winner_total(o,x,t);
    REQUIRE(o == 1);
	REQUIRE(x == 1);
    REQUIRE(t == 1);
	
}