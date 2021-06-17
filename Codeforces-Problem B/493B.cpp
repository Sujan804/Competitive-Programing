/** PUSH YOURSELF TO THE LIMIT**/
/*** Sujan Ahmed ***/
/**** Updated: 27-04-21||10:32 AM **/
/*** Last Edit: map **/
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

void solve(){
    int n;
    cin>>n;
    vll v(n);
    for(auto &t:v)
        cin>>t;
    ll a=0,b=0;
    rep(i,0,n){
        //cout<<v[i]<<' ';
        if(v[i]<0){
            b += v[i];
        }else{
            a += v[i];
        }
    }
    b = abs(0-b);
    //cout<<a<<' '<<b<<endl;
    if(a>b){
        cout<<"first"<<endl;
        //test
    }else if(b>a){
        cout<<"second"<<endl;
    }else{

        vi va,vb;
        rep(i,0,n){
            if(v[i]>0){
                va.pb(v[i]);
            }else{
                vb.pb(v[i]);
            }
        }
        int Min = min(va.size(),vb.size());
        rep(i,0,Min){
            if(va[i]>abs(vb[i])){
                cout<<"first"<<endl;
                return;
            }else if(va[i]<abs(vb[i])){
                //test
                cout<<"second"<<endl;
                return;
            }
        }
        //cout<<v[n-1]<<endl;
            if(v[n-1]>0){
                cout<<"first"<<endl;
                return;
            }else{
                cout<<"second"<<endl;
                return;
            }


        /*ll la=0,lb=0;
        ll mla=0,mlb=0;
        rep(i,0,n){
            if(v[i]>0){
                la = v[i];
                break;
            }
        }
        rep(i,0,n){
            if(v[i]<0){
                lb = v[i];
                break;
            }
        }
        rep(i,1,n){
            if(v[i]>0){
                la += v[i];
                if(mla<la){
                    mla = la;
                }
            }else{
                la = 0;
            }
            if(v[i]<0 && abs(v[i-1])<abs(v[i])){
                lb += v[i];
            }else{
                if(mlb<lb){
                    mlb = lb;
                }
                lb = 0;
            }

        }
        mlb = abs(0-mlb);
        cout<<mla<<' '<<mlb<<"l"<<endl;
        if(mlb>mla){
            cout<<"second"<<endl;
            return;

        }else if(mla>mlb){
            test
            cout<<"first"<<endl;
            return;
        }else{
            //test
            if(v[n-1]>0){
                cout<<"first"<<endl;
                return;
            }else{
                cout<<"second"<<endl;
                return;
            }
        }*/
    }
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

