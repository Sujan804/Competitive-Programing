
/** PUSH YOURSELF TO THE LIMIT**/
/*** Sujan Ahmed ***/
/**** Updated: 28-04-21||10:24 PM **/
/*** Last Edit: pi **/
#include<bits/stdc++.h>
#define IO std::ios_base::sync_with_stdio(false);std::cin.tie(nullptr);cout.tie(nullptr);
//#define endl "\n"
#define l64 __int64
//#define MOD 100000007
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

const int mod = (int)1e9+7;
const int maxn = (int)2e5+5;
const int inf = 1e9+9;
const ll INF = 1e18;
const double pi = 3.141592653589793;
const ll MOD = (ll)1e9 + 7;

ll binPow(ll a, ll q, ll MOD = 1e9 + 7) {
    a %= MOD;
    if (q == 0) return 1;
    return ((q % 2 == 1 ? a : 1) * binPow(a * a, q / 2, MOD)) % MOD;
}
 const int mx=101;
 int parent[mx];
 int rnk[mx]={0};
 int freq[mx]={0};

 int Find(int x)
 {
     if(x!=parent[x])
        parent[x]=Find(parent[x]);

     return parent[x];
 }

 void Union(int x,int y)

 {
     int a=Find(x);
     int b=Find(y);

     if(a==b) return;

     if(rnk[a]<rnk[b])
     {
         parent[a]=b;
     }
     else
       {
           parent[b]=a;
           if(rnk[a]==rnk[b])
            rnk[b]++;
       }
 }

 int main()

 {
     int n,m;
     int no_language=0,count=0;
     for(int i=0;i<=mx;i++)
     {
         parent[i]=i;
     }
     cin>>n>>m;
     int u,v,k;
     for(int i=0;i<n;i++)
     {
         cin>>k;
         if(k==0)
         {
             no_language++;
             continue;
         }
         cin>>u;// first elements of k elements
         freq[u]++;
         for(int j=1;j<k;j++)
         {
             cin>>v;
             freq[v]++;
             Union(u,v);// make set
         }
     }
     int ans=0;
     for(int i=1;i<=m;i++)
     {
         if(freq[i]==0) count++;
         else if(parent[i]==i)
         {
             ans++;
         }
     }
     ans=ans-1;
     if(count==m) cout<<n<<endl;
     else
     {
        cout<<ans+no_language<<endl;
     }
     return 0;
 }
