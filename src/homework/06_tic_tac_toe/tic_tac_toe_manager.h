// tic_tac_toe_manager.h
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe.h"
#include <vector>
using namespace std;

class TicTacToeManager {
public:
    void save_game(TicTacToe b);
    void get_winner_total(int& o, int& w, int& t);
private:
    vector<TicTacToe> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;

    void update_winner_count(string winner);
};

#endif 
