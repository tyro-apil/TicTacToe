//Grid class definition

#ifndef _UI_HPP
#define _UI_HPP

enum class grid { empty = 0,
                  gap,
                  playerA,
                  playerB };

class board
{
    private:
        grid elements[3][5];
        grid winner;
        char playerA_mark, playerB_mark, empty_mark, gap_mark;
        int turn_count;
        
    public:
        board(): elements({{grid::empty, grid::gap, grid::empty, grid::gap, grid::empty},
                          {grid::empty, grid::gap, grid::empty, grid::gap, grid::empty},
                          {grid::empty, grid::gap, grid::empty, grid::gap, grid::empty}}),
                 winner(grid::empty),
                 playerA_mark('O'), playerB_mark('X'), empty_mark('_'), gap_mark(' '),
                 turn_count(0){ }//Constructor
        void display_grid();
        grid prompt(int);
        bool check_diagonal(grid);
        bool check_row(grid);
        bool check_col(grid);
        bool check_win(bool);
        void display_win(grid, bool);
};

#endif  //_GRID_HPP