//Grid class definition

#ifndef _UI_HPP
#define _UI_HPP

enum class player { playerA,
                    playerB
                    };

enum class grid { empty = 0,
                  gap,
                  playerA,
                  playerB };

class board
{
    private:
        grid elements[3][5];

    public:
        board(): elements({grid::empty, grid::gap, grid::empty, grid::gap, grid::empty},
                          {grid::empty, grid::gap, grid::empty, grid::gap, grid::empty},
                          {grid::empty, grid::gap, grid::empty, grid::gap, grid::empty}){ } //Constructor
        
};

#endif  //_GRID_HPP