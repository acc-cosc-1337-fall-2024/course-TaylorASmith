// tic_tac_toe.cpp
#include "tic_tac_toe.h"
#include <iostream>
using namespace std;

bool TicTacToe::game_over() const {
    return check_board_full();
}

void TicTacToe::start_game(string first_player) {
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position) {
    pegs[position - 1] = player;
    set_next_player();
}

string TicTacToe::get_player() const {
    return player;
}

void TicTacToe::display_board() const {
    for (int i = 0; i < 9; ++i) {
        std::cout << pegs[i];
        if ((i + 1) % 3 == 0) {
            std::cout << std::endl;
        } else {
            std::cout << " | ";
        }
    }
}

void TicTacToe::set_next_player() {
    player = (player == "X") ? "O" : "X";
}

bool TicTacToe::check_board_full() const {
    for (const auto& peg : pegs) {
        if (peg == " ") {
            return false;
        }
    }
    return true;
}

void TicTacToe::clear_board() {
    for (auto& peg : pegs) {
        peg = " ";
    }
}
