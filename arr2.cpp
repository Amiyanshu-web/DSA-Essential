#include <bits/stdc++.h>

using namespace std;
int search(int arr[],int l,int h,int key){
	if(l>h)
		return -1;

	int mid=l+h/2;
	if(key==mid){
		return mid;
	}
	else if(key>=arr[l] && key<mid){
		return search(arr,mid-1,h,key);
	}
	else return search(arr,mid+1,h,key);

}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n=9;
	int key=6;
	int i=search(arr,0,n,key);
	if(i!=-1){
		cout<<"Found at "<<i<<'\n';

	}	
	else cout<<"not Found"<<endl;
}