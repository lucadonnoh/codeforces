#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << "I hate";
    int i = 0;
    while(i<n-1)
    {
        if(i++%2 == 0) cout << " that I love";
        else cout << " that I hate";
    }
    cout << " it";
}