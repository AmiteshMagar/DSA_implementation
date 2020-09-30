#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0;i < n; i++)
		cin >> arr[i];
	bool flag = false;
	int a = 0, b = n, c;
	int k;
	cout << "element to be searched for\n";
	cin >> k;
	while (flag == true && a <= b){
		c = (a+b)/2;
		if( k == c)
			flag = true;
		else if ( k < c)
			b = c;
		else 
			a = c;
		cout << flag << "\n";
	}
	if (flag == true)
		cout << "Element found";
}