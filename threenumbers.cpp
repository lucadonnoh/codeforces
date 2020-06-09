#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int max = std::max(std::max(std::max(a,b),c),d);
    int x = max - a;
    int y = max - b;
    int z = max - c;
    int k = max - d;
    if(x) cout << x;
    if(y) {if(x){cout << " ";}cout << y;}
    if(z) {cout << " ";cout << z;}
    if(k) {cout << " ";cout << k;}
    return 0;
}
