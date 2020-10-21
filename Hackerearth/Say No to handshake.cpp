#include<bits/stdc++.h>
#define ses return 0
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n = n*(n-1)/2;
        cout<<n<<endl;
    }
    ses;
}
