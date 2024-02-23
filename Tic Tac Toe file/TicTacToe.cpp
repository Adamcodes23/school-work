//Adam Hernandez
//4/12/2022
// This program demonstrates 2 dimensional arrays
// by displaying and managing a tic-tac-toe board.
#include <iostream>
using namespace std;

int main()
{
    const int NUM_ROWS = 3;
    const int NUM_COLS = 3;

    char board[NUM_ROWS][NUM_COLS];//Declare 2-D arrays

    //Set all positions to '-'

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            board[i][j] = '-';
        }
    }

    cout << endl << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
    cout << endl << endl;

    //Player 1 : X
    int x, y;
    cout << "Player 1: enter row and column" << endl;
    cin >> x >> y;

    board[x][y] = 'X';

    cout << endl << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
    //Player 2: O
    cout << "Player 2: enter row and column" << endl;
    cin >> x >> y;

    board[x][y] = 'O';

    cout << endl << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }















}
