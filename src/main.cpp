//main function for cpp project

#include "ui.hpp"

int board::turn_count = 0;
int main()
{
    grid player;
    bool win;
    board tictactoe;
    while(board::turn_count <= 9)
    {
        if(tictactoe.winner != grid::empty)
        {
            return;
        }
        tictactoe.display_grid();
        player = tictactoe.prompt();
        tictactoe.set_mark(player);
        win = tictactoe.check_win(player);
        tictactoe.display_win(player, win);
    }
    std::cout<<"### Game ends in TIE ###"<<std::endl;
    return 0;
}