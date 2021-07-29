// corridor game -- Driver code

#include <iostream>
#include <headers.h>

using namespace std;

int main() {
    // number of players
    int number_of_players;
    cin >> number_of_players;
    CORRIDOR corridor(number_of_players);
    // set the board
    corridor.set_board(number_of_players);
    
}