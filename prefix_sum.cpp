#include <bits/stdc++.h>

using namespace std;
#define ll long long 
// void solve(){
// 	int n;
// 	cin>>n;
// 	ll int arr[n];
// 	ll int sum=0;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cin>>arr[i];
// 		if(arr[0]==-1) arr[0]=0;
// 		else if(arr[i]==-1){
			
// 			double newNum=(sum)/(i);
			
// 			arr[i]=newNum;
		
// 		}
// 		sum+=arr[i];
		
// 	}
	/*else{
		for (int i = 1; i < n; ++i)
	{
		sum+=arr[i-1]; 
		if(arr[i]==-1){
			double newNum=(sum)/(i);
			
			arr[i]=newNum;
		}
	}
	}*/
	
// 	for (int i = 0; i < n; ++i)
// 	{
// 		cout<<round(arr[i])<<" ";
// 	}
// 	cout<<'\n';
// }
// int main(){
// #define _z ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


	/*int n;
	cin>>n;
	int arr[n];
	for ( int i = 0; i < n; ++i)
	{
	cin>>arr[i];
	}
	int t;
	cin>>t;
	while(t--){
		int i,j;
		ll int sum=0;
		cin>>i>>j;
		for ( int x = i; x <= j; ++x)
		{

			sum+=arr[x];
		}
		cout<<sum<<'\n';
	}*/
// 	int t;
// 	cin>>t;
// 	while(t--){

// 	solve();
// 	}
// }


/*
#include <iostream>
#include<climits>
using namespace std;
int maxSubArraySum(int a[], int size){
    int max_so_far = INT_MIN, max_ending_here = 0;
    for(int i=0;i<size;i++){
        max_ending_here+=a[i];
        if(max_so_far<=max_ending_here)  max_so_far=max_ending_here;
        else if(max_ending_here<0)  max_ending_here=0;
    }
    return max_so_far;
    
}
int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
*/

int main(){
	vector<int> arr1 = { 4, -8, 9, -4, 1, -8, -1, 6 };
    int k = 4;
    vector<long long int> pf;
    // pf[0]=arr1[0];
    pf.push_back(arr1[0]);
    for (int i = 1; i < arr1.size(); ++i)
    {
    	pf.push_back(pf[i-1]+arr1[i]);
    	
    	/* code */
    }
    // for (int i = 1; i < arr1.size(); ++i)
    // {
    // 	pf.push_back(arr1[i]);
    // }
    sort(pf.begin(),pf.end(),greater<int>());
    for(int i=0;i<arr1.size();i++)	cout<<pf[i]<<" ";
}