#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i <= n/2; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){



	int t1,t2;
	cin>>t1>>t2;
	int count=0;
	for (int i = t1; i <= t2; ++i)
	{
		int prime =i;	
		
		if(isPrime(prime)){
			int sum=0;
			while(prime!=0){
				sum=sum+prime%10;
				prime=prime/10;
			}
			if(isPrime(sum))	count++;

		}
		
	}
	cout<<count<<endl;
	}
}


  

  
