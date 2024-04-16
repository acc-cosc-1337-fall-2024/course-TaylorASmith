// tic_tac_toe.h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <vector>
#include <string>
using namespace std;

class TicTacToe {
public:
    // Constructor is not specified in the requirements as it's not explicitly stated
    // Member Functions
    bool game_over() const; // Check if the game is over
    void start_game(string first_player); // Start the game
    void mark_board(int position); // Mark the board at a specific position
    string get_player() const; // Get the current player
    void display_board() const; // Display the tic-tac-toe board
private:
    // Private Member Functions
    void set_next_player(); // Set the next player
    bool check_board_full() const; // Check if the board is full
    void clear_board(); // Clear the board

    // Private Data Members
    string player; // Current player
    vector<string> pegs; // Tic-tac-toe board
};

#endif // TIC_TAC_TOE_H
