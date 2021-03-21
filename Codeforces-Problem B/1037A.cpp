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
    int x;
    cin>>x;
    int ans=0;
    while(x)
    {
        x>>=1;
        ans++;
    }
   cout<<ans<<endl;


}
int main(){
    IO
   /* int t;
    cin>>t;
    while(t--){
        solve();
    }
    */
    solve();
    return 0;

}
