    #include <iostream>
    #include <algorithm>
    #include <array>
    using namespace std;

    int main()
    {
        int n;
        std::cin >> n;
        int arr[n];
        for(int i=1;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=1;i<n;i++){
            if(arr[i]!=i)   {cout<<i<<'\n';break;}
            else if(i==n-1) cout<<n ;
        }
        

        return 0;
    }
