#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X")
{
	tictactoe game;

	game.start_game("X");

    REQUIRE(game.get_player() == "X");

}


TEST_CASE("Test first player set to O")
{
	tictactoe game;

	game.start_game("O");

    REQUIRE(game.get_player() == "O");

}


TEST_CASE("Test if the bord is full")
{
	tictactoe game;

	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");
	
}


TEST_CASE("Test win by first column")
{
	tictactoe game;

	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test win by second column")
{
	tictactoe game;

	game.start_game("X");

	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test win by third column")
{
	tictactoe game;

	game.start_game("X");

	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test win by first row ")
{
	tictactoe game;

	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test win by second row ")
{
	tictactoe game;

	game.start_game("X");

	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test win by third row ")
{
	tictactoe game;

	game.start_game("X");

	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test win diagonally from top left  ")
{
	tictactoe game;

	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test win diagonally from bottom left ")
{
	tictactoe game;

	game.start_game("X");

	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);

}

TEST_CASE("Test get_winner function X win")
{
	tictactoe game;

	game.start_game("X");

	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

}

TEST_CASE("Test get_winner function O win")
{
	tictactoe game;

	game.start_game("O");

	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "O");

}

//get_winner == "C" already have.

TEST_CASE("Test get_winner_total X win")
{
	tictactoe_manager manager;
	tictactoe game;

	game.start_game("X");

	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "X");

	int o,x,t;

    manager.save_game(game);
    manager.get_winner_total(o,x,t);
	REQUIRE(x == 1);

}

TEST_CASE("Test get_winner_total O win")
{
	tictactoe_manager manager;
	tictactoe game;

	game.start_game("O");

	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "O");

	int o,x,t;

    manager.save_game(game);
    manager.get_winner_total(o,x,t);
	REQUIRE(o == 1);

}

TEST_CASE("Test get_winner_total tie")
{
	tictactoe_manager manager;
	tictactoe game;

	game.start_game("X");

	game.mark_board(1);
	REQUIRE(game.game_over() == false);
	game.mark_board(2);
	REQUIRE(game.game_over() == false);
	game.mark_board(3);
	REQUIRE(game.game_over() == false);
	game.mark_board(4);
	REQUIRE(game.game_over() == false);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);
	game.mark_board(7);
	REQUIRE(game.game_over() == false);
	game.mark_board(6);
	REQUIRE(game.game_over() == false);
	game.mark_board(9);
	REQUIRE(game.game_over() == false);
	game.mark_board(8);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "C");

	int o,x,t;

    manager.save_game(game);
    manager.get_winner_total(o,x,t);
	REQUIRE(t == 1);

}

TEST_CASE("Test get_winner_total 3 games")
{
	tictactoe_manager manager;

	tictactoe game1;
	game1.start_game("X");
	game1.mark_board(7);
	game1.mark_board(2);
	game1.mark_board(5);
	game1.mark_board(6);
	game1.mark_board(3);
	manager.save_game(game1);

	tictactoe game2;
	game2.start_game("O");
	game2.mark_board(7);
	game2.mark_board(2);
	game2.mark_board(5);
	game2.mark_board(6);
	game2.mark_board(3);
	manager.save_game(game2);

	tictactoe game3;
	game3.start_game("X");
	game3.mark_board(1);
	game3.mark_board(2);
	game3.mark_board(3);
	game3.mark_board(4);
	game3.mark_board(5);
	game3.mark_board(7);
	game3.mark_board(6);
	game3.mark_board(9);
	game3.mark_board(8);
	manager.save_game(game3);

	int o,x,t;

    REQUIRE(o == 1);
	REQUIRE(x == 1);
    REQUIRE(t == 1);
	
}