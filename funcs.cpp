#include <iostream>
#include <headers.h>

CORRIDOR :: CORRIDOR(int n) {
    number_of_players = n;
}

void CORRIDOR :: set_board(int num) {
    // 2 players :
    if (num == 2) {
        board[0]   = "Yellow";
        board[10]  = "Blue  ";
    }
    // 3 players :
    else if (num == 3) {
        board[0]   = "Yellow";
        board[10]  = "Blue  ";
        board[110] = "Green ";

    }
    //4 players :
    else if (num == 4) {
        board[0]   = "Yellow";
        board[10]  = "Blue  ";
        board[110] = "Green ";
        board[120] = "Red   ";
    }

}

void CORRIDOR :: print_board() {
    for (int i = 0 ; i < 66 ; i++)
        std :: cout << "-";
    std :: cout << std :: endl;
    for (int i = 0 ; i < 11 ; i++)
    {
        for (int j = 0 ; j < 11 ; j++)
        {
            if (j != 10)
            {
                std :: cout << "|" << board[i*11 + j] ;
            }
            else
                std :: cout << "|" << board[i*11 + j] << "|";
        }
        std :: cout << std :: endl;
        {
            for (int j = 0 ; j < 66 ; j++)
            {
                std :: cout << "-";
            }
        }
        std :: cout << std :: endl;
    }
}


