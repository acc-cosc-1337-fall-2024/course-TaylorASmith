// tic_tac_toe.h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <vector>
#include <string>
using namespace std;

class TicTacToe {
public:
    TicTacToe(); 
    bool game_over() const;
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const;
    void display_board() const;
    std::string get_winner() const;
private:
    void set_next_player();
    bool check_board_full() const;
    void clear_board();
    bool check_column_win() const;
    bool check_row_win() const;
    bool check_diagonal_win() const;
    void set_winner();

    std::string player;
    std::vector<std::string> pegs;
    std::string winner;
};

#endif