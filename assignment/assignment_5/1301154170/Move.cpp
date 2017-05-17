#include <cmath>
#include <iostream>

#define PI 3.14

using namespace std;

int jumlah, sudut;
double hasilsudut, distance1, x, y, sumx, sumy;

int main()
{
    x = 0;
    y = 0;
    sumx = 0;
    sumy = 0;
    cout << "Input Total Titik: ";
    cin >> jumlah;
    for (int i=1;i<=jumlah;i++) {
        cout << "Input Sudut: ";
        cin >> sudut;
        cout << "Input Jarak: ";
        cin >> distance1;
        hasilsudut = sudut*PI/180;
        x = distance1*cos(hasilsudut);
        y = distance1*sin(hasilsudut);
        sumx = sumx+x;
        sumy = sumy+y;

    }
    cout << "X = " << sumx << endl;
    cout << "Y = " << sumy << endl;
    return 0;
}
