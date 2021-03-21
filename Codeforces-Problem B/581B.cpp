/** PUSH YOURSELF TO THE LIMIT**/
/*** Sujan Ahmed ***/
/**** Updated: 21-3-21||23:00 **/
#include<bits/stdc++.h>
#define IO std::ios_base::sync_with_stdio(false);std::cin.tie(nullptr);cout.tie(nullptr);
#define endl "\n"
#define l64 __int64
#define mod 1000000007
#define maxN 1000000
#define PB push_back
#define sort(vec) vec.begin(),vec.end()
#define rsort(vec) vec.rbegin(),vec.rend()

#define mkp make_pair
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound

using namespace std;
using ll= long long;
using pii = pair<int,int>;
using pll = pair<long long,long long>;
using pcc = pair<char ,char>;
using pdd = pair<double,double>;
using pci = pair<char,int>;

using vi = vector<int>;
using vc = vector<char>;
using vs = vector<string>;
using vd = vector<double>;
using vll = vector<ll>;
using vpii = vector<pii>;

void solve(){
    int t,i,temp,Max=0;
    vi v;
    cin>>t;
    int arr[t];
    for(i=0;i<t;i++){
        cin>>arr[i];
    }
    v.pb(0);
    for(i=t-2;i>=0;i--){
        if(arr[i+1]>Max)
            Max = arr[i+1];
        if(arr[i]>Max)
            v.pb(0);
        else if(arr[i]==Max)
            v.pb(1);
        else
            v.pb(Max+1-arr[i]);
    }
    for(i=v.size()-1;i>=0;i--){
        cout<<v[i]<<' ';
    }



}
int main(){
    IO
    /*int t;
    cin>>t;
    while(t--){
        solve();
    }*/
    solve();
    return 0;

}

