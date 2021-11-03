#include <iostream>
#include <array>
#include <algorithm>

using namespace std;
void solve(int arr[],n){
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			
		}
	}
}
void print_array(int arr[],int n){
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";

	}

}

/*int main()
{
    int arr[]= {12,11,-13,-5,6,-7,5,-3,-6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    int arr1[n];
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr1[count++]=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            arr1[count++]=arr[i];
        }
    }
    for(int i=0;i<n;i++){ cout<<arr1[i]<<" ";}
    return 0;
}*/

/*int main(){
	int arr[]={4,7,9,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n,greater<int>());
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}

}*/

/*int main(){
	int arr[]={1, -3, 5, 6, -3, 6, 7, -4, 9, 10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int arr1[n];
	int count=0;
	int ocount=1;
	for(int i=0;i<n;i++){
		if(arr[i]>=0) {
			arr1[count]=arr[i];
			count+=2;}
		else {
			arr1[ocount]=arr[i];
			ocount+=2;
		}
	}
	for(int i=n-1;i>=0;i+=2){
		arr1[count]=arr[i];
		count+=2;
	}

	print_array(arr1,n);
}*/

int main(){
	int arr[]={2,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	// int temp[n];
	// temp[0]=a[0]*a[1];
	// temp[n-1]=a[n-1]*a[n-2];
	// for (int i = 1; i < n-1; ++i)
	// {
	// 	temp[i]=a[i-1]*a[i+1];
	// 	/* code */

	// }
	/*int prev=arr[0];
	arr[0]=arr[0]*arr[1];
	for (int i = 0; i < n-1; ++i)
	{
		int curr=arr[i];
		arr[i]=prev*arr[i+1];
		prev=curr;		


	}
	arr[n-1]=arr[n-1]*prev;*/
	solve(arr,n);
	print_array(arr,n);
}