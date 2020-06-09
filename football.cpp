#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    int n = 1;
    char c;
    for(int i = 1; i<s.length(); i++)
    {
        if(s[i] == s[i-1])
        {
            n++;
            if(n == 7)
            {
                cout << "YES";
                return 0;
            }
        }
        else
        {
            n = 1;
        }

    }
    cout << "NO";
}