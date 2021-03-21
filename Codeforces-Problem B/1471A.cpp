// PUSH YOURSELF TO THE LIMIT
#include<bits/stdc++.h>
#define IO std::ios_base::sync_with_stdio(false);std::cin.tie();cout.tie(0);
#define ll long long
#define l64 __int64
#define mod 1000000007
#define maxN 1000000
using namespace std;
void solve(){
    ll n,x;
    cin>>n>>x;
    ll a[n];
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ll sum1=0;
    for(ll i=0;i<n;i++)
    {
        double c=((double)a[i]/x);
        ll t=ceil(c);
        sum1+=t;
    }
    ll mi=ceil((double)sum/x);
    cout<<min(mi,sum1)<<" "<<max(mi,sum1)<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;

}

