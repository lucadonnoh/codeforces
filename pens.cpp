#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,m,k;
    cin >> n >> m >> k;

    if(k >= n && m >= n) cout << "Yes";
    else cout << "No";
}