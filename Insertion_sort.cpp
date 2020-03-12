#include<iostream>
using namespace std;

int main(){
	int n, temp, min, k;
	cin >> n;
	int arr[n];
	for(int i=0; i < n; i++)
		cin >> arr[i];
	// algo of insertion sort
	// stable, adaptive, internal, offline, in-place
	for(int j = 1; j < n; j++){
		min = arr[j];
		k = j;
		while (k > 0 && arr[k-1] > min){
			arr[k]=arr[k-1];
			k--;
		}
	arr[k] = min;
	}
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}