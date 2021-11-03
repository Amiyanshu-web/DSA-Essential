#include<bits/stdc++.h>

using namespace std;

/*int main(){
	int n;
	cin>>n;
	int mask;
	int ans=0;
	int mul=1;
	while(n>0){
		mask=(n&1);
		ans+=mask*mul;
		mul*=10;
		n=n>>1;

	}
	cout<<ans;
}*/

int main(){
	int t;
	while(t--){
		int n;
		cin>>n;
		string bracket="(";
		// for(int i=1;i<n;i++){
		// 	bracket+="()";
		// }
		
	// 	for (int i = 0; i < n; i++)
	// {
	// 	/* code */
	// 	if (bracket[i] == ')' && bracket[i + 1] == '(')
	// 	{
	// 		swap(bracket[i], bracket[i + 1]);
	// 	}
	// 	cout << bracket << endl;
	// }


		cout<<bracket;
	// int k=n;
	// int i=0;
	// while(k>0 && i<n){
	// 	if (bracket[i] == ')' && bracket[i + 1] == '(')
	// 	{
	// 		swap(bracket[i], bracket[i + 1]);
	// 		cout<<bracket<<endl;

	// 	}

	// 	i++;k--;
	// }
	}
}