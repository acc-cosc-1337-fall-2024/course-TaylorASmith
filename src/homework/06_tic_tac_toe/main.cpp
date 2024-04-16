// main.cpp
#include "tic_tac_toe.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    TicTacToe game;
    string first_player;
    cout << "Enter first player (X or O): ";
    cin >> first_player;
    game.start_game(first_player);

    char choice;
    do {
        int position;
        game.display_board();
        cout << "Enter position (1-9): ";
        cin >> position;
        game.mark_board(position);
        if (game.game_over()) {
            cout << "Game over!" << endl;
            game.display_board();
            cout << "Do you want to play again? (Y/N): ";
            cin >> choice;
            if (choice == 'Y' || choice == 'y') {
                void clear_board();
            }
        }
    } while (choice == 'Y' || choice == 'y');

    cout << "Thanks for playing!" << endl;
    return 0;
}
