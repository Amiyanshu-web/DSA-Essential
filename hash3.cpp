#include <bits/stdc++.h>

using namespace std;




int main()
{
   int arr[] = {3, 1, 4, 4, 5, 2, 63,3,3,4,5,5,5};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    unordered_map<int,int>mp;
    for (int i = 0; i < n; ++i)
    {
      mp[arr[i]]++;

       /* code */
    }
    while(k--){
      int max=0;
      int index;
      for(auto x:mp){
         if(x.second>max){
            max=x.second;
            index=x.first;
         }
         else if(x.second==max){
            if(x.first>index){
               index=x.first;

            }
            
         }
      }
      cout<<index<<" ";
      mp.erase(index);
    }
    return 0;
}