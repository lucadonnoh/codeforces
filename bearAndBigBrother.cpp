#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    float a,b;
    int n;
    cin >> a >> b;
    n = int(log(float(b)/float(a))/log(float(3)/float(2)))+1;
    cout << n;
    return 0;
}
