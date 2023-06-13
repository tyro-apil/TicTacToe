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
        std::cout<<"Player B"<<std::endl;
        return grid::playerB;
    }
    std::cout<<"Player A"<<std::endl;
    return grid::playerA;
}

void board::set_mark(grid player)
{
    int mark;
    std::cout<<"Type your choice (1-9): ";
    std::cin>>mark;
    int row;
    if(mark%3)
    {
        row = mark/3;
    }
    else{
        row = mark/3 - 1;
    }
    int col = col_index[mark%3];
    elements[row][col] = player;
}

bool board::check_diagonal(grid player)
{   
    bool diagonal=true, antidiagonal=true;
    for(int row=0; row<3; row++)
    {
        if(elements[row][row*2] != player)
        {
            diagonal = false;
        }
        if(elements[row][4 - 2*row] != player)
        {
            antidiagonal = false;
        }
    }
    return (diagonal || antidiagonal);
}

bool board::check_row(grid player)
{
    bool row_match;
    for(int row=0; row<3; row++)
    {
        row_match = true;
        for(int col=0; col<5; col+=2)
        {
            if(elements[row][col] != player)
            {
                row_match = false;
            }
        }
        if (row_match)
        {
            return true;
        }
    }
    return false;
}

bool board::check_col(grid player)
{
    bool col_match;
    for(int row=0; row<3; row++)
    {
        col_match = true;
        for(int col=0; col<5; col+=2)
        {
            if(elements[row][col] != player)
            {
                col_match = false;
            }
        }
        if (col_match)
        {
            return true;
        }
    }
    return false;
}

void board::check_win(grid player)
{
    bool win = (check_col(player) || check_row(player) || check_diagonal(player));
    if(win)
    {
        winner = player;
        display_grid();
        display_win(player);
    }
}

void board::display_win(grid player)
{
    if(player == grid::playerA)
    {
        std::cout<<"!!! SHOUT OUT TO PLAYER A FOR THE WIN !!!!"<<std::endl;
    }
    else
    {
        std::cout<<"!!! SHOUT OUT TO PLAYER A FOR THE WIN !!!!"<<std::endl;
    }
}
