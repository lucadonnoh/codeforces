#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char matrix[3][3];
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(matrix[i][j] != matrix[2-i][2-j])
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}