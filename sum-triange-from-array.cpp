#include<bits/stdc++.h>
using namespace std;

void printarr(int arr[], int n){
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void sumt(int arr[], int n){
	if(n == 1){
		printarr(arr, n);
		return;
	}
	printarr(arr, n);
	for(int i=0; i<n-1; i++){
		arr[i] = arr[i]+arr[i+1];
	}
	sumt(arr, n-1);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	sumt(arr, n);
}
