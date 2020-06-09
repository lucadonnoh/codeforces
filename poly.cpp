#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    int i;
    cin >> i;
    string p;
    int tot = 0;
    while(i--)
    {
        cin >> p;
        if(p == "Tetrahedron") tot += 4;
        if(p == "Cube") tot += 6;
        if(p == "Octahedron") tot += 8;
        if(p == "Dodecahedron") tot += 12;
        if(p == "Icosahedron") tot += 20;
    }

    cout << tot;
}