#include <iostream>

using namespace std;
#define ll long long

int main()
{
    ll int n;
    std::cin >> n;
    cout<<n<<" ";
    while(n>1){
        if(n%2==0){
            n=n/2;
            cout<<n<<" ";
        }
        else {
            n=(n*3)+1;
            cout<<n<<" ";
        }
    }

    return 0;
}
