#include <iostream>
#include "equi.h"

using namespace std;

int main()
{
    int n;
    cout<<"Masukkan banyak indeks : ";
    cin>>n;
    int arr[n];
    input(n, arr);
    equi(n, arr);
    return 0;
}
