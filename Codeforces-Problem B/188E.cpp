
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

    const int maxx = 1e5+1;
    vi v[maxx];
    int vis[maxx];
    int in[maxx],low[maxx];
    int timer;
    bool hasBridge;
    vpii edgeList;
    void dfs(int n, int p){
        vis[n]=1;
        in[n]=low[n]=timer++;
        for(auto u:v[n]){
            if(u==p)
                continue;
            if(vis[u]){
                low[n]= min(low[n],in[u]);
                if(in[n]>in[u]){
                    edgeList.pb({n,u});
                }
            }else{
                dfs(u,n);
                if(in[n]<low[u]){
                    hasBridge = true;
                   // cout<<n<<' '<<u<<endl;e
                    return;
                }
                edgeList.pb({n,u});
                low[n]= min(low[n],low[u]);
            }
        }
        //return false;
    }
    void solve(){
        int n,m,a,b;
        cin>>n>>m;
        while(m--){
            cin>>a>>b;
            v[a].pb(b);
            v[b].pb(a);
        }
        //bool hasBridge =
        dfs(1,-1);
        if(hasBridge){
            cout<<0<<endl;
            return;
        }else{
            //cout<<1<<endl;
            for(auto u:edgeList){
                cout<<u.ff<<' '<<u.ss<<endl;
            }
            return;
        }

    }

    int main(){
        IO
       /* TC
       {
            //cout << "Case #" << ++CT <<": " ;
            solve();
        }*/
        solve();
        return 0;

    }
