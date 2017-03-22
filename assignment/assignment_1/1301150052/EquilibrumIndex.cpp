#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	bool ada=false;
	int arr[1000001],n,sum,a;
	scanf("%d",&n);
	sum=0;
	for (int i=0;i<n;i++) {
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	for (int i=0;i<n;i++) {
		if (i==0) {
			a=arr[0];
			sum-=a;
			if (sum==a) {
				printf("%d\n",i);
				ada=true;
			}

		}
		else if (i>0 && i<n-1) {
			if (sum-arr[i]==a) {
				printf("%d\n",i);
				ada=true;
			}
			a+=arr[i];
			sum-=arr[i];
		}
		else {
			if (sum==a) {
				printf("%d\n",i);
				ada=true;
			}
		}
	}
	if (!ada)
			printf("-1\n");
	return 0;
}
