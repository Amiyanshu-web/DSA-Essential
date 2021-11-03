#include <bits/stdc++.h>

using namespace std

void merge(int &arr[],int s,int e){
	int i=s;int mid=(s+e)/2;
	int j=mid+1;
	vector<int>v;

	while(i<=mid and j<=e){
		if(arr[i]<arr[i+1]){
			v.push_back(arr[i]);
			i++;
		}
		else {
			v.push_back(arr[j]);
			j++;
		}

	}
	//push remaining element from 1st array
	while(i<=m){
		v.push_back(arr[i++]);
	}
	//push remaining element from 2nd array

	while(j<=e)	v.push_back(arr[j++]);

	//copy back
	int key=0;
	for(int ind=s;ind<=e;ind++){
		arr[ind]=v[key++];
	}
	return;
}

void mergesort(int &arr[],int s,int e ){
	if(s>=e)	return;
	int mid=(s+e)/2;

	mergesort(arr,s,mid);
	mergesort(arr,mid+1,e);
	return merge(arr,s,e);

}
int main(){
	int arr=[10,5,0,2,7,6,4];

	int n=sizeof(arr)/sizeof(int)
	int s=0;int e=n-1;
	mergesort(arr,s,e);

	//print the array
}
