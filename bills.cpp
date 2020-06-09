#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, tot = 0;
    cin >> n;
    while(n)
    {
        if(n>=100)
        {
            n-=100;
            tot++;
        }
        else if(n>=20)
        {
            n-=20;
            tot++;
        }
        else if(n>=10)
        {
            n-=10;
            tot++;
        }
        else if(n>=5)
        {
            n-=5;
            tot++;
        }
        else
        {
            n--;
            tot++;
        }
    }
    cout << tot;
    return 0;
}
