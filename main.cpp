//Author: Alex leonard
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter rows and columns of stars:" << endl;
    int row;
    cin >> row;
    int col;
    cin >> col;
    int r;
    int c;
    if (row > 0 && col > 0)
    {

        vector<vector<char> >stars(row, vector<char>(col));
    
        for (r = 0 ; r < row ; r++)
        {
            for (c = 0 ; c < col ; c++)
            {
                stars[r][c] = '*';
                cout << stars[r][c];
            }
            cout << endl;
        }
    }
    else
    {
        return 0;
    }
    return 0;
    
}
