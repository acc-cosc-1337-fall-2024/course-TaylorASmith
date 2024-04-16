// main.cpp
#include "tic_tac_toe.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    char choice;
    do {
        TicTacToe game;
        string first_player;
        cout << "Enter first player (X or O): ";
        cin >> first_player;
        game.start_game(first_player);

        do {
            game.display_board();
            int position;
            cout << "Enter position (1-9): ";
            cin >> position;
            game.mark_board(position);

            if (game.game_over()) {
                game.display_board();
                string winner = game.get_winner();
                if (winner == "C") {
                    cout << "It's a tie!" << endl;
                } else {
                    cout << "Player " << winner << " wins!" << endl;
                }
                break;
            }
        } while (true);

        cout << "Do you want to play again? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    cout << "Thanks for playing!" << endl;
    return 0;
}
