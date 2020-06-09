#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char a[3], b[3];
    int n = 5;
    cin >> a;
    while(n--)
    {
        cin >> b;
        if(b[0] == a[0] || b[1] == a[1])
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}

