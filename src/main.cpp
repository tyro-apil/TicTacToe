//main function for cpp project //haha change++


#include "../inc/ui.hpp"

int board::turn_count = 0;
int main()
{
    grid player;
    board tictactoe;
    while(board::turn_count <= 9)
    {
        if(tictactoe.winner != grid::empty)
        {
            return 0;
        }
        tictactoe.display_grid();
        board::turn_count ++;
        if(board::turn_count == 10)
        {
            continue;
        }
        player = tictactoe.prompt();
        tictactoe.set_mark(player);
        tictactoe.check_win(player);
    
    }
    std::cout<<"### Game ends in TIE ###"<<std::endl;
    system("pause>nul");
    return 0;
}