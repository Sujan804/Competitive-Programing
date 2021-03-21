// PUSH YOURSELF TO THE LIMIT
#include<bits/stdc++.h>
#define IO std::ios_base::sync_with_stdio(false);std::cin.tie();cout.tie(0);
#define ll long long
#define l64 __int64
#define mod 1000000007
#define maxN 1000000
#define pb push_back
using namespace std;
void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll>v,v1;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        ll t;
        cin>>t;
        sum+=t;
        v.pb(t);
    }
    bool ok=0;
    ll c=x;
    while(!ok)
    {
        for(ll i=0;i<v.size();i++)
        {
            if(v[i]%x==0)
            {
                v[i]/=x;
                sum+=(v[i]*c);
            }
            else
            {
                ok=1;
                break;
            }
        }
        c*=x;
    }
    cout<<sum<<endl;
}
int main(){
    IO
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;

}
