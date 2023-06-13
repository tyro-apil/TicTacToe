#include "ui.hpp"

void board::display_grid()
{
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<5; col++)
        {
            if(!(col%2))
            {
                switch (elements[row][col])
                {
                    case grid::empty:
                        std::cout<<empty_mark;
                        break;
                    case grid::playerA:
                        std::cout<<playerA_mark;
                        break;
                    case grid::playerB:
                        std::cout<<playerB_mark;
                        break;
                }
            }
            else
            {
                std::cout<<gap_mark;
            }
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}

grid board::prompt()
{
    std::cout<<"Turn goes to : ";
    if(!(turn_count%2))
    {
        std::cout<<"Player A"<<std::endl;
        return grid::playerA;
    }
    std::cout<<"Player B"<<std::endl;
    return grid::playerB;
}