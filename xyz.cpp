/*#include <bits/stdc++.h>

using namespace std;

#define ll  long long

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t,n;
	int inf=1;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		int arr1[n];

		for (int i = 0; i < n; ++i)
		{	
			cin>>a[i];
			arr1[i]=a[i];
		}

		
		sort(arr1,arr1+n);
		while(inf++){
			if(inf%2!=0){
				for (int i = 1; i < n; i+=2)
				{
				if(a[i]>a[i+1])	swap(a[i],a[i+1]);
					
				}
			}
			else{
				for (int i = 0; i < n; i+=2)
				{
					if(a[i]>a[i+1])	swap(a[i],a[i+1]);

				}
			}
			
		}

	}



}*/

#include <bits/stdc++.h>
using namespace std;

void changePermuation(int arr[], int x,int count)
{
	if(count%2!=0)
	for (int i = 0; i < x; i+=2)
	{
		if (arr[i] > arr[i + 1])
		{
			swap(arr[i], arr[i + 1]);
		}
	}

	else {
		for (int i = 1; i < x; i+=2)
	{
		if (arr[i] > arr[i + 1])
		{
			swap(arr[i], arr[i + 1]);
		}
	}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int testCase ;
	cin >> testCase;
	while (testCase--)
	{
		int n=0 ;
		cin >> n;
		int count = 1;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		while (!is_sorted(arr, arr + n))
		{
			changePermuation(arr, n,count);
			count++;
		}
		int diff =count-1;
		cout<<diff<<'\n';
	}
	return 0;
}





