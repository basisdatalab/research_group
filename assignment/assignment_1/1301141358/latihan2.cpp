#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
  int n;
  cout << " Masukkan angka :";
  cin >> n;
  int arr[n];
  int eq=0;
  for (int i=0; i<n ;i++){
    cout << " Masukan Bilangan ke "<<i+1<<":";
    cin >> arr[i];
  }

      for (int i=0; i<n; ++i){
        int sum=0;
        int leftsum=0;
        for (i=0; i<n; ++i)
            sum += arr[i];

        for( i = 0; i < n; ++i){
            sum -= arr[i];

            if(leftsum == sum){
                eq++;
                cout<<i<<" ";}

            leftsum += arr[i];
        }
        if (eq==0)
        cout<< "-1";
    }
}
