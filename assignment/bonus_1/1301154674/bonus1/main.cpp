#include <iostream>

using namespace std;

int x1, x2, x3, x4, x5, x6, x7, x8;
int main()
{
    cin >> x1;
    cin >> x2;
    cin >> x3;
    cin >> x4;
    cin >> x5;
    cin >> x6;
    cin >> x7;
    cin >> x8;
    if ((x1<x5<x3 && x2<x6<x4) || (x1<x7<x3 && x2<x8<x4)) {
        cout << "True";
    }
    else {
        cout << "False";
    }
}
