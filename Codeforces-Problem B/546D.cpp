/** PUSH YOURSELF TO THE LIMIT**/
/*** Sujan Ahmed ***/
/**** Updated: 28-04-21||10:24 PM **/
/*** Last Edit: pi **/
#include<bits/stdc++.h>
#define IO std::ios_base::sync_with_stdio(false);std::cin.tie(nullptr);cout.tie(nullptr);
//#define endl "\n"
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
#define sf scanf
#define pf printf

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

const int MAX = 5000001;
int arr[MAX],P[MAX];
void sieve(){
    int i,j,t,k;
    arr[0]=0;
    arr[1]=0;
    rep(i,2,MAX){
        arr[i]=i;
    }
    for(i=4;i<MAX;i+=2){
        arr[i]=2;
    }
    for(i=3;i*i<=MAX;i+=2){
        if(arr[i]==i){
            for(j=i*i;j<MAX; j+=2*i){
                if(arr[j]==j){
                    arr[j]=i;
                }
            }
        }
    }
    for(i=2;i<5000001;i++){
        P[i]=P[i/arr[i]]+1;
    }
    for (i=2; i<5000001; i++)
    	P[i] += P[i-1];
}

int main(){
    sieve ();

    int tc,i,a,b;

    sf ("%d",&tc);

    for (i=1; i<=tc; i++)
    {
        sf ("%d %d",&a,&b);
        pf ("%d\n",P[a]-P[b]);
    }

}
