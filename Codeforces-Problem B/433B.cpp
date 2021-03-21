// PUSH YOURSELF TO THE LIMIT
#include<bits/stdc++.h>
#define IO std::ios_base::sync_with_stdio(false);std::cin.tie();cout.tie(0);
#define ll long long
#define l64 __int64
#define mod 1000000007
#define maxN 1000000
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll ar[n];
    for(ll i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    ll a[n+1],b[n+1];
    for(ll i=0;i<=n;i++)
    {
        a[i]=0;
        b[i]=0;
    }
    for(ll i=1;i<=n;i++)
    {
        a[i]=a[i-1]+ar[i-1];
    }
    sort(ar,ar+n);
    for(ll i=1;i<=n;i++)
    {
        b[i]=b[i-1]+ar[i-1];
    }
    ll m;
    cin>>m;
    while(m--)
    {
        ll l,r,t;
        cin>>t>>l>>r;
        if(t==1)
        {
            cout<<(a[r]-a[l-1])<<endl;
        }
        else
        {
            cout<<(b[r]-b[l-1])<<endl;
        }

    }
}
int main(){
    IO
   /* int n,temp;
    cin>>n;
    int vec[n];
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int t;
    cin>>t;
    while(t--){
        solve(vec);
    }*/
    solve();
    return 0;

}
