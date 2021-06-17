/** PUSH YOURSELF TO THE LIMIT**/
/*** Sujan Ahmed ***/
/**** Updated: 23-04-21||5:47 AM **/
/*** Last Edit: Test Case **/
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
using umsi = unordered_map<string,int>;

const int N = 1e5+5;

int cnt[30];

void solve(){
    char s[N], t[N];
    scanf("%s%s",&s,&t);
    int n = strlen(s);
    int m = strlen(t);

    memset(cnt, 0, sizeof cnt);

    bool sau = false;
    for(int i=0,j=0; i<n; ++i){
        if(j<m && s[i]==t[j]) ++j;
        if(j==m) sau = true;
    }

    for(int i=0;i<n;++i) cnt[s[i]-'a']++;
    for(int i=0;i<m;++i) cnt[t[i]-'a']--;

    bool sar = true;
    bool all = true;

    for(int i=0;i<26;++i){
        sar&=cnt[i]==0;
        all&=cnt[i]>=0;
    }

    if(sau) cout<<"automaton"<<endl; else
    if(sar) cout<<"array"<<endl; else
    if(all) cout<<"both"<<endl; else
    cout<<"need tree"<<endl;


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

