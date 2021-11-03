/*#include <bits/stdc++.h>

using namespace std;
#define ll long long 
#define endl "\n"
const int N=1e3+10;
long long int pf[N][N];
long long int temp[N][N];

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	int n,m,u,q;
	cin>>n>>m>>u>>q;
	int arr[n][m];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0;j < m; ++j)
		{
			cin>>arr[i][j];
		}
	}
	while(u--){
		int k,r1,c1,r2,c2;
		cin>>k>>r1>>c1>>r2>>c2;
		for (int i = c1; i <= c2; ++i)
		{
			temp[r1][i]+=k;
			temp[r2+1][i]-=k;
		}
		
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0;j < m; ++j)
		{
			arr[i][j]+=temp[i][j];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0;j < m; ++j)
		{
			pf[i][j]=arr[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
		}
	}
	while(q--){
		ll int a,b,c,d;
		cin>>a>>b>>c>>d;
		ll int ans=pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1];
		cout<<ans<<endl;
	}
}*/

#include <bits/stdc++.h>

using namespace std;
#define ll long long 
#define endl "\n"
const int N=1e3+10;
long long pf[N][N];

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	int n,m,u,q;
	cin>>n>>m>>u>>q;
	int arr[n][m];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0;j < m; ++j)
		{
			cin>>arr[i][j];
		}
	}
	while(u--){
		int k,r1,c1,r2,c2;
		cin>>k>>r1>>c1>>r2>>c2;
		for (int i = r1; i <= r2; ++i)
		{
			for (int j = c1; j <= c2; ++j)
			{
				arr[i][j]+=k;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0;j < m; ++j)
		{
			pf[i][j]=arr[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
		}
	}
	while(q--){
		ll int a,b,c,d;
		cin>>a>>b>>c>>d;
		ll int ans=pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1];
		cout<<ans<<endl;
	}
}