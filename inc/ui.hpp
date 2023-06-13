//Grid class definition

#ifndef _UI_HPP
#define _UI_HPP

#include <iostream>

enum class grid { empty = 0,
                  gap,
                  playerA,
                  playerB };

class board
{
    private:
        grid elements[3][5];
        char playerA_mark, playerB_mark, empty_mark, gap_mark;
        int col_index[3] = {4, 0, 2};
        
        
    public:
        static int turn_count;
        grid winner;
        board(): elements({{grid::empty, grid::gap, grid::empty, grid::gap, grid::empty},
                          {grid::empty, grid::gap, grid::empty, grid::gap, grid::empty},
                          {grid::empty, grid::gap, grid::empty, grid::gap, grid::empty}}),
                 winner(grid::empty),
                 playerA_mark('O'), playerB_mark('X'), empty_mark('_'), gap_mark(' ')
                 { }//Constructor
        void display_grid();
        grid prompt();                   //Whose turn
        void set_mark(grid);
        bool check_diagonal(grid);
        bool check_row(grid);
        bool check_col(grid);
        bool check_win(grid);               //Check all conditions for win
        void display_win(grid, bool);       //Check win for prompt player
};

#endif  //_GRID_HPP