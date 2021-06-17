/** PUSH YOURSELF TO THE LIMIT**/
/*** Sujan Ahmed ***/
/**** Updated: 28-04-21||10:24 PM **/
/*** Last Edit: pi **/
#include<bits/stdc++.h>
using namespace std;
using ll= long long;
using pii = pair<int,int>;
using pll = pair<long long,long long>;
using pcc = pair<char ,char>;
using pdd = pair<double,double>;
using pci = pair<char,int>;
using si = set<int>;
using s = string;

using seti = set<int>;
using useti = unordered_set<int>;
using mseti = multiset<int>;
using umseti = unordered_multiset<int>;


using vi = vector<int>;
using vc = vector<char>;
using vs = vector<string>;
using vd = vector<double>;
using vll = vector<ll>;
using vpii = vector<pii>;

using msi = map<string,int>;
using mii = map<int,int>;
using mci = map<char,int>;
using umsi = unordered_map<string,int>;

#define IO std::ios_base::sync_with_stdio(false);std::cin.tie(nullptr);cout.tie(nullptr);
#define endl "\n"
#define l64 __int64
#define MOD 100000007
#define maxN 1000000
#define maxN 1000000
#define PB push_back
#define rsort(vec) vec.rbegin(),vec.rend()
#define bset(n) bitset<n>
#define mkp make_pair
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define repw(i,a,b) for( int i=a;a<=b;i++)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define TC int testcase, CT=0; cin>>testcase;while(testcase--)
#define test  cout<<"Okay"<<endl;

#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define f0(x)             __builtin_clz(x)
#define l0(x)             __builtin_ctz(x)
#define isEven(x)         __builtin_parity(x)



const int mod = (int)1e9+7;
const int maxn = (int)2e5+5;
const int inf = 1e9+9;
const ll INF = 1e18;
const double pi = 3.141592653589793;
#define type1  testcase

vi finddivs(int n){
    vi res;
    for(int i=1;i*i<=n;i++){
        if(!(n%i)){
            res.pb(i);
            if(i*i != n){
                res.pb(n/i);
            }
        }
    }
    return res;
}
void fina(vi v,int m){
        int a,b;
        cin>>a>>b;
       // int lower = lower_bound(v.begin(),v.end(),a)-v.begin()+1;
         //cout<<v[lower]<<endl;
        for(int i=0;i<v.size();i++){
            //cout<<v[i]<<endl;
            if(v[i]>=a and v[i]<=b){
                if(!(m%v[i])){
                    cout<<v[i]<<endl;
                    return;
                }
            }

         }
        cout<<-1<<endl;
        return;

}
void solve(){
    int n,m;
    cin>>n>>m;
    vi v = finddivs(n);
    sort(v.rbegin(),v.rend());
    /*for(auto t:v){
        cout<<t<<endl;
    }*/
    int t;
    cin>>t;
    while(t--){
        fina(v,m);
    }



}

int main(){
    IO
   // TC
   //{
        //cout << "Case #" << ++CT <<": " ;
        //solve();
   // }
    solve();
    return 0;

}

