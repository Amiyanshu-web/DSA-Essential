#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	int arr[]={-1, 2, -3, 4, 5, 6, -7, 8, 9};
	int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr,arr+n);
	for (int i = 0; i <n; ++i)
	{
		if(arr[i]>0)
			int count=i;break;
		/* code */
	}
	int neg=0;
	while(count<n && neg<3 && arr[neg]<0)
	{
		swap(&arr[neg],&arr[count]);
		count++;
		neg+=2;
	}

	 for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

}