#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int row, column = 1;
    int n;
    int tot;

    for(int i = 0; i<25; i++)
    {
        column = i/5+1;
        row = i%5+1;
        cin >> n;
        if(n == 1)
        {
            tot = (abs(3-column)+abs(3-row));
        }
    }

    cout << tot;
}
