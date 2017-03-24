#include "equi.h"

void input(int x, int arr[])
{
    for (int i=0 ; i<x;i++){
        cout<<"Masukkan Angka : "<<endl;
        cin>>arr[i];
    }
    for (int i = 0; i<x; i++){
        cout << i+1 << ". " << arr[i] << endl;
    }
}
void equi(int x,int arr[])
{
    int counti=0;
    int sumleft=0;
    int sumright=0;
    for (int i=0;i<x;i++){
        for (int j=0; j<i; j++){
            sumleft+=arr[j];
        }
        for (int k=i+1; k<x; k++){
            sumright+=arr[k];
        }
        if (sumleft==sumright){

            cout<<"Indeks Equilibrium : "<<endl;
            cout<<i<<endl;
            counti++;
        }

        sumleft=0;
        sumright=0;

        }
    if (counti==0){
            cout<<"-1";
    }

}
