#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,i;
    cin >> n >> i;
    while(i--)
    {
        if(n%10 == 0)
        {
            n /= 10;
        }
        else
        {
            n--;
        }
    }
    cout << n;
    return 0;
}
