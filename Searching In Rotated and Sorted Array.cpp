#include <bits/stdc++.h> 
using namespace std; 
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
        return binarySearch(arr, mid + 1, r, x); 
    } 
    return -1; 
} 
  
int getpivot(int arr[], int n){
	for(int i=0; i<n-1; i++){
		if(arr[i]>arr[i+1])
			return i;
	}

	return 0;
}

int main(void) 
{ 
    int n;
    cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++)
    	cin>>arr[i];
    int x;
    cin>>x;
    int ans = getpivot(arr, n);
    int ans1 = binarySearch(arr, 0, ans-1, x);
    if(ans1 == -1){
    	int ans2 = binarySearch(arr, ans, n-1, x);
    	cout<<"Element found at index: "<<ans2;
    	return 0;

    }

    cout<<ans1;
    return 0; 
}
