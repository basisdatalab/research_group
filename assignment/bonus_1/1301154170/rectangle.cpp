#include <iostream>

using namespace std;

int x1, x2, x3, x4, y1, y2, y3, y4;
int main()
{
    cout<<"Persegi Panjang kedua harus lebih ke kanan atas atau kanan sejajar dari persegi satu"<<endl;
    cout<<"Persegi 1"<<endl;
    cout<<"x1: ";
    cin >> x1;
    cout<<"y1: ";
    cin >> y1;
    cout<<"x2: ";
    cin >> x2;
    cout<<"y2: ";
    cin >> y2;
    cout<<"Persegi 2"<<endl;
    cout<<"x3: ";
    cin >> x3;
    cout<<"y3: ";
    cin >> y3;
    cout<<"x4: ";
    cin >> x4;
    cout<<"y4: ";
    cin >> y4;

    if (((x2 - x1) == (y2 - y1)) || ((x4 - x3) == (y4 - y3)))
    {
        cout << "Salah Input karena salah satu atau keduanya berupa persegi"<<endl;
    }
    else
    {
        if ((x1<x3<x2 && y1<y3<y2) || (x1<x4<x2 && y1<y4<y2))
        {
            if((x2 - x3) == (y2 - y3) )
            {
                cout << "False";
            }
            else
            {
                cout << "True";
            }
        }
        else
        {
            cout << "False";
        }
    }
}
