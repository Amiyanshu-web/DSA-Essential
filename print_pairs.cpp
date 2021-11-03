
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(int);
	int index=0;
	while(index<n-1){
	int temp=arr[index];
	cout<<temp;
	for(int i=index+1;i<n;i++){
		// cout<<"("<<temp<<","<<arr[i]<<")"<<endl;
		cout<<" "<<arr[i];
	}
	index++;
	cout<<endl;
	}
	
	return 0;
}