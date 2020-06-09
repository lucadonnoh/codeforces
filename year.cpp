#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,m;
    cin >> n >> m;
    string sn[n];
    string sm[m];
    for(int i = 0; i<n; i++)
    {
        cin >> sn[i];
    }
    for(int i = 0; i<m; i++)
    {
        cin >> sm[i];
    }
    int q;
    cin >> q;
    int years[q];
    for(int i = 0; i<q; i++)
    {
        cin >> years[i];
    }
    for(int i = 0; i<q; i++)
    {
        cout << sn[(n+(years[i]%n-1))%n] << sm[(m+(years[i]%m-1))%m] << endl;
    }
}