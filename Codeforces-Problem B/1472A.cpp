// PUSH YOURSELF TO THE LIMIT
#include<bits/stdc++.h>
#define IO std::ios_base::sync_with_stdio(false);std::cin.tie();cout.tie(0);
#define ll long long
#define l64 __int64
#define mod 1000000007
#define maxN 1000000
using namespace std;
void solve(){
    int w,h,t,p=1;
    cin>>w>>h>>t;
    if(t==p){
        cout<<"YES"<<endl;
        return;
    }
    while(w%2==0||h%2==0){
        if(w%2==0){
            w /= 2;
            p = p*2;
        }else{
            h /= 2;
            p =p*2;
        }
        if(p>=t){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;

}
