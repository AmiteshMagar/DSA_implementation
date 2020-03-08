#include<cstdio>
using namespace std;

void main(){
	int n,temp;
	scanf("%d", &n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	//Sorting algorith for bubble-sort
	// Stable, Adaptive, Offline, Internal
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				temp= arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}