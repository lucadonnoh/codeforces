#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    int tot = 0;
    cin >> n;
    m = n/2;
    while(m)
    {
        if(n%m-- == 0) tot++;
    }
    cout << tot;
    return 0;
}