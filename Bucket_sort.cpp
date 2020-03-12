#include<cstdio>
using namespace std;

//bucket-sort, linear sorting algorithm that trades the space complexeity for time
// external, non-adaptive, not-stable, offline

int main(){
	int n, k, count=0;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	k = arr[0];
	for(int i = 0; i < n; i++)
		if(arr[i] > k)
			k = arr[i];
	int bucket[k+1];
	for (int j = 0; j <= k; j++){
		bucket[j] = 0;
	}
	for (int j = 0; j < n; j++){
		bucket[arr[j]]++;
	}
	for(int j = 0; j <= k; j++){
		while(bucket[j] > 0 && count <= n){
			arr[count] = j;
			bucket[j]--;
			count++;
		}
	}
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}