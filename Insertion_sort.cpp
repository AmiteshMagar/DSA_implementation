#include<iostream>
using namespace std;

void main(){
	int n,temp,min;
	for(int i=0; i < n; i++)
		cin >> arr[i];
	// algo of insertion sort
	// stable, adaptive, internal, offline, in-place
	for(int i = 0; i < n-1 ; i++){
		min = arr[i];
		for (int j=i+1; j<n ; j++){
			if (arr[j] < min){
				min = arr[j];
			}
		
		}
	}
}