#include <iostream>

using namespace std;

int main(){
    int count;
    cin >> count;
    int arr[count];
    int counteq = 0;
    // cout << "count : " << count << endl;
    for (int i = 0; i < count; ++i)
    {
    	cin >> arr[i];
    }
    // for (int i = 0; i < count; ++i)
    // {
    // 	cout << "arr[" << i << "] : " << arr[i] << endl;
    // }
    for (int i = 0; i < count; ++i)
    {
    	int kiri = 0;
    	int kanan = 0;
    	for (int j = 0; j < i; ++j)
    	{
    		kiri+= arr[j];
    	}
    	for (int k = i+1; k < count; ++k)
    	{
    		kanan+= arr[k];
    	}
    	if (kiri == kanan){
    		counteq++;
    		cout << i << " ";
    	}
    }
    if (counteq == 0){
    	cout << "-1";
    }
}