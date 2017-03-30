#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int arr[n], sum = 0, jml = 0, res[n], sumleft = 0;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	for (int i = 0; i < n; ++i) {
		sum -= arr[i];
		if (sumleft == sum) {
			res[jml] = i;
			jml++;
		}
		sumleft += arr[i];
	}
	if (jml > 0) {
		for (int i = 0; i < (jml - 1); ++i)
			printf("%d ", res[i]);
		printf("%d\n", res[jml-1]);
	} else printf("%d\n", -1);
}