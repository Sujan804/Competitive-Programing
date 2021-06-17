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

#define sci(x) scanf("%d", &(x))
#define scii(x,y) scanf("%d%d", &(x), &(y))
#define sciii(x,y,z) scanf("%d%d%d", &(x), &(y), &(z))
#define scl(x) scanf("%lld", &(x))
#define scll(x,y) scanf("%lld%lld", &(x), &(y))
#define sclll(x,y,z) scanf("%lld%lld%lld", &(x), &(y), &(z))
#define scd(x) scanf("%lf", &(x))
#define scdd(x,y) scanf("%lf%lf", &(x), &(y))
#define scstr(x) scanf("%s", x)
#define pfi(x) printf("%d", (x))
#define pfii(x,y) printf("%d %d", (x), (y))
#define pfl(x) printf("%lld", (x))
#define pfll(x,y) printf("%lld %lld", (x), (y))
#define pfd(x) printf("%f", (x))
#define pfstr(x) printf("%s", (x))
#define spc printf(" ")
#define pbrk printf("\n")

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

vll findDiv(ll n){
    vll v;
    ll d=1;
    ll sq = sqrt(n);
    for(int i=1;i<=sq;i++){
        if(!(n%i)){
            v.pb(i);
            if(n/i!=i){
                v.pb(n/i);
            }
        }

    }
    return v;

}
void solve(){
    ll n,k;
    cin>>n>>k;
    vll vec;
    vec = findDiv(n);
    //sort(vec);
    sort(vec.begin(), vec.end());
    if(k>vec.size()){
        cout<<-1<<endl;
        return;
    }
    cout<<vec[k-1]<<endl;
    return;


}

int main(){
    IO
    solve();
    return 0;

}
