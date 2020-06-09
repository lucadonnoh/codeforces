#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,n;
    cin >> i;
    while(i--)
    {
        cin >> n;
        if(n) {cout << "hard"; return 0;}
    }
    cout << "easy";
    return 0;
}

