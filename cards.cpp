#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int z = 0; int o = 0;
    char word[n];

    for(int i = 0; i<n; i++)
    {
        cin >> word[i];
    }

    for(int i = 0; i<n; i++)
    {
        if(word[i] == 'z') z++;
        if(word[i] == 'n') o++;
    }

    for(int i = 0; i<o; i++)
    {
        if(i!=o-1 || z>0) cout << "1 ";
        else cout << "1";
    }
    for(int i = 0; i<z; i++)
    {
        if(i!=z-1) cout << "0 ";
        else cout << "0";
    }
}