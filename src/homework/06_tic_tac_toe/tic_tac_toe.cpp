// tic_tac_toe.cpp
#include "tic_tac_toe.h"
#include <iostream>
using namespace std;

TicTacToe::TicTacToe() {
    clear_board();
}

bool TicTacToe::game_over() const {
    return check_board_full() || !winner.empty();
}

void TicTacToe::start_game(string first_player) {
    player = (first_player == "X" || first_player == "O") ? first_player : "X";
    clear_board();
}

void TicTacToe::mark_board(int position) {
    pegs[position - 1] = player;
    set_next_player();
    set_winner();
}

string TicTacToe::get_player() const {
    return player;
}

void TicTacToe::display_board() const {
    for (int i = 0; i < 9; ++i) {
        cout << pegs[i];
        if ((i + 1) % 3 == 0) {
            cout << endl;
        } else {
            cout << " | ";
        }
    }
}

string TicTacToe::get_winner() const {
    return winner;
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
    winner.clear();
}

bool TicTacToe::check_column_win() const {
    for (int i = 0; i < 3; ++i) {
        if (pegs[i] != " " && pegs[i] == pegs[i + 3] && pegs[i] == pegs[i + 6]) {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_row_win() const {
    for (int i = 0; i < 9; i += 3) {
        if (pegs[i] != " " && pegs[i] == pegs[i + 1] && pegs[i] == pegs[i + 2]) {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win() const {
    return (pegs[0] != " " && pegs[0] == pegs[4] && pegs[0] == pegs[8]) ||
           (pegs[2] != " " && pegs[2] == pegs[4] && pegs[2] == pegs[6]);
}

void TicTacToe::set_winner() {
    if (check_column_win() || check_row_win() || check_diagonal_win()) {
        winner = player;
    } else if (check_board_full()) {
        winner = "C"; // Tie
    }
}
