#include<cstdio>
using namespace std;

//bucket-sort, linear sorting algorithm that trades the space complexeity for time
// external, non-adaptive, not-stable, offline

void main(){
	int n,k;
	scanf("%d", &n);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d", &arr[i]);
	k=arr[0];
	for(int i=0;i<n;i++)
		if(arr[i]<k)
			k = arr[i];
	int bucket[k];
	for (int j = 0; j < k; j++){
		bucket[j] = 0;
	}
	for (int j=0;j<n;j++){
		bucket[arr[j]]++;
	}
	int count =0;
	for(int j=0;j<k;j++){
		if(bucket[j]>0 && count<=n){
			arr[count]=j;
			bucket[j]--;
		}
	}
	//print j
}