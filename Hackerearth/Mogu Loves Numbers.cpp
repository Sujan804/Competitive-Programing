#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
bool v[1000001];
void seive(){
    memset(v,true,sizeof(v));
    v[0]=v[1]=false;
    for(ll i=2;i*i<=1000000;i++){
        if(v[i]){
            for(ll j=i*i;j<=1000000;j+=i){
                    v[j]=false;
            }

        }
    }
}

int main()

{
    fast;
    ll t,n,a;
    seive();
    ll x[1000001];
    x[0]=0;
    ll d=0;
    for(ll i=1;i<=1000000;i++){
        if(v[i])
            d++;
        x[i]=d;
    }
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        if(l>r)
            l=r-l+(r=l);
        cout<<x[r]-x[l-1]<<"\n";

    }

}
