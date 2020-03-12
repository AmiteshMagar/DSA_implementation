#include<cstdio>
using namespace std;

int main(){
	int n,temp,min;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	//Algo of Selection sort
	// Internal, Offline, Stable, Non-Adaptive, In-place
	for(int i = 0; i < n-1; i++){
		min = i;
		for(int j = i+1; j < n; j++){
			if(arr[j] < arr[i])
				min = j;
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
		}
	}
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}