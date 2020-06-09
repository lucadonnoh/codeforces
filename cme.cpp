#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int cmes[n];
    for(int i = 0; i < n; i++)
    {
        cin >> cmes[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(cmes[i] < 3)
        {
            cout << (4 - cmes[i]) << endl;
        }
        else if(cmes[i]%2==1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}