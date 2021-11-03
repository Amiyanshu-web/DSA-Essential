#include <bits/stdc++.h>
using namespace std;

// int main(){
// 	int arr[]={90,20,10,15,13,6};
// 	int n=sizeof(n)/sizeof(int);
// 	priority_queue<int,std::vector<int>,greater<int> > heap;  //by defaault max heap
// 	for(auto x:arr){
// 		heap.push(x);
// 	}
// 	while(!heap.empty()){
// 		cout<<heap.top()<<" ";
// 		heap.pop();
// 	}
// return 0;
// }

int main(){
	int n,x,y,k;
	double dis=0;
	cin>>n>>k;
	vector<double>v;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		dis=pow((pow(x,2)+pow(y,2)),0.5);
		v.push_back(dis);
	}
	priority_queue<double>heap;
	for(int i=0;i<k;i++){
		heap.push(v[i]);
	}
	for(int i=k;i<n;i++){
		if(heap.top()>v[i]){
			heap.pop();
			heap.push(v[i]);
		}
	}
		while(!heap.empty()){
 		cout<<heap.top()<<" ";
 		heap.pop();
 	}
}