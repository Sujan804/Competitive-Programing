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

void solve(){

    int n;
    cin>>n;
    if(n<=9){
        cout<<n<<endl;
        return;
    }
    int cnt =0;
    int m = n;
    while (m != 0) {
        //temp = m%10;
        //mp[temp]++;
        m /= 10;     // n = n/10
        ++cnt;
    }
    int t = cnt -1;
    int p = pow(10,t);
    if()
    int ans = 9*t+((n-9))/(pow(10,t));
    cout<<ans<<endl;

   /* if(n<=9){
        cout<<n<<endl;
        return;
    }else if(n<=99){
        cout<<9+((n-9))/10;
    }else if(n<=999){
        cout<<18+((n-9)/100);
    }else if(n<=9999){
        cout<<27+((n-9)/1000);
        return;
        }
*/


}

int main(){
    IO
    TC
   {
        //cout << "Case #" << ++CT <<": " ;
        solve();
    }
    //solve();
    return 0;

}


