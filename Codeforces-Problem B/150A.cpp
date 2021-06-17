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

ll p[283150];
int vis[4000005];
int ans;
void init()
{
    int i,j;
    memset(vis,0,sizeof(vis));
    for(i=2;i<=4000001;i++)
    {
        if(vis[i])
           continue;
        p[ans]=i;
        ans++;
        for(j=i*2;j<=4000001;j+=i)
            vis[j]=1;
    }
}
int main()
{
    ll n,add=0,t=1,i;
    ans=0;
    init();
    scanf("%lld",&n);
    ll temp=n;
    for(i=0;i<ans&&p[i]<=n;i++)
    {
        if(n%p[i]==0)
        {
            while(n%p[i]==0)
            {
                n/=p[i];
                add++;
                if(add>2)
                    break;
                t*=p[i];
            }
            if(add>2)
                break;
        }
    }
    if(temp==1||(add==1&&n==1)||add==0)
    {
        printf("1\n0\n");
        return 0;
    }
    if(add>2||add==2&&n!=1)
    {
        printf("1\n%lld\n",t);
    }
    else
        printf("2\n");
    return 0;
}

