#include <iostream>
#include <cmath>

using namespace std;

int n;
double sudut, sudut1;
float x, y, hasilx, hasily, jarak;

int main()
{
    x = 0;
    y = 0;
    hasilx = 0;
    hasily = 0;
    cout << "Masukkan jumlah titik: ";
    cin >> n;
    for (int i=1;i<=n;i++) {
        cout << "Masukkan sudut: ";
        cin >> sudut;
        cout << "Masukkan jarak: ";
        cin >> jarak;
        sudut1 = sudut*3.14/180;
        x = jarak*cos(sudut1);
        y = jarak*sin(sudut1);
        hasilx = hasilx+x;
        hasily = hasily+y;
    }
    cout << "x = " << hasilx << endl;
    cout << "y = " << hasily << endl;
}
