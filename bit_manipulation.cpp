#include<iostream>
using namespace std;

int getithbit(int n,int i){
	int leftshift=(1<<i);

	return (n & leftshift)>0 ? 1 : 0; 
}

void clearithbit(int &n,int i){
	int leftshift=(1<<i);
	int notbit=(~leftshift);
	n= (n & notbit);
}
void updateithbit(int &n,int i,int v){
	clearithbit(n,i);
	int mask=(v<<i);
	n=(n|mask);
}

int countBits(int n){
	int count=0;
	while(n>0){
		int lastbit=n&1;
		count+=lastbit;
		n=n>>1;	
	}
	return count;
}

int countBitshack(int n){
	int ans=0;
	while(n>0){
	n=(n & (n-1));
	ans++;	
	}

	return ans;
}

int main(){
	int n,i,v;
	cin>>n>>i;
	// cin>>v;
	// cout<<getithbit(n,i)<<endl;
	// clearithbit(n,i);
	updateithbit(n,i,0);
	while(i>0){
		clearithbit(n,i);
		i--;
	}
	cout<<n;
}