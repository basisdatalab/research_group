#include <iostream>
#include <algorithm>

using namespace std;

int n, maxx, minx, maxy, miny;
int x[30];
int y[30];

int main()
{
    cin >> n;
    for (int i=0;i<n;i++) {
        cout << "Masukkan nilai x: ";
        cin >> x[i];
        cout << "Masukkan nilai y: ";
        cin >> y[i];
    }
    maxx = *std::max_element(x,x+n);
    minx = *std::min_element(x,x+n);
    maxy = *std::max_element(y,y+n);
    miny = *std::min_element(y,y+n);
    cout << minx << " " << maxy << endl;
    cout << maxx << " " << maxy << endl;
    cout << maxx << " " << miny << endl;
    cout << minx << " " << miny << endl;
}
