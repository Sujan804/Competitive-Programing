/** PUSH YOURSELF TO THE LIMIT**/
/*** Sujan Ahmed ***/
/**** Updated: 27-04-21||10:32 AM **/
/*** Last Edit: map **/
#include<bits/stdc++.h>
#define IO std::ios_base::sync_with_stdio(false);std::cin.tie(nullptr);cout.tie(nullptr);
//#define endl "\n"
#define l64 __int64
#define mod 1000000007
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
void solve(){
    int n,m;
    cin>>n>>m;
    if(m==0){
        cout<<"YES"<<endl;
        return;
    }
    vi v(m);
    for(auto &t:v){
        cin>>t;
    }
    sort(v.begin(),v.end());
    /*rep(i,0,m){
        cout<<v[i]<<endl;
    }*/
    if(v[0]==1 or v[m-1]==n){
        cout<<"NO"<<endl;
        return;
    }
    int cnt=0;
    rep(i,1,m){
        //cout<<v[i]-v[i-1]<<endl;
        if((v[i]-v[i-1])==1){
            cnt++;
            if(cnt>=2){
                cout<<"NO"<<endl;
                return;
            }
        }else{
            cnt =0;
        }
    }
    cout<<"YES"<<endl;
    return;

}

int main(){
    IO
    //TC
   // {
        //cout << "Case #" << ++CT <<": " ;
      //  solve();
    //}
    solve();
    return 0;

}

