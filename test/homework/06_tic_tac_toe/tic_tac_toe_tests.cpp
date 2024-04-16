#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

#include "tic_tac_toe.h"
#include <iostream>
using namespace std;

int main() {
    TicTacToe game;

    game.start_game("X");

    std::vector<int> positions = {1, 2, 3, 4, 5, 7, 6, 9, 8};
    for (int pos : positions) {
        game.mark_board(pos);
        if (game.game_over()) {
            std::cout << "Game over!" << std::endl;
            break;
        }
    }

    return 0;
}
