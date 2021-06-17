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



const int maxn=1e5+100;
int prime[maxn],cnt;
bool vis[maxn];
int ok[maxn],factor[maxn];
vector<int> vec[maxn];
void get_prime()//prime number table
{
    memset (vis,true,sizeof (vis));
    vis[1]=false;
    for (int i=2;i<maxn;i++) {
        if (vis[i]) prime[cnt++]=i;
        for (int j=0;j<cnt&&i*prime[j]<maxn;j++) {
            vis[i*prime[j]]=false;
            if (i%prime[j]==0) break;
        }
    }
}
 void get_factor(int n)//decompose prime factors
{
    if (n==1) return vec[n].push_back(1);
    int m=n;
    for (int i=0;i<cnt&&prime[i]*prime[i]<=n;i++) {
        if (n%prime[i]==0) {
            vec[m].push_back(prime[i]);
            while (n%prime[i]==0) {
                n=n/prime[i];
            }
        }
    }
    if (n!=1) vec[m].push_back(n);
}
int main()
{
    get_prime();
    int n,m;
    while (scanf("%d%d",&n,&m)!=EOF) {
        for (int i=1;i<=n;i++) {
            get_factor(i);
            ok[i]=factor[i]=0;
        }
        while (m--) {
            char str[5];int num;
            scanf("%s%d",str,&num);
            if (str[0]=='-') {
                if (ok[num]==0) {
                    puts("Already off");
                }
                else {
                    puts("Success");
                    ok[num]=0;
                    for (int i=0;i<vec[num].size();i++) {
                        factor[vec[num][i]]=0;
                    }
                }
            }
            else if (str[0]=='+') {
                if (ok[num]==1) {
                    puts("Already on");
                }
                else {
                    bool flag=false;
                    for (int i=0;i<vec[num].size();i++) {
                        if (factor[vec[num][i]]!=0) {
                            printf("Conflict with %d\n",factor[vec[num][i]]);
                            flag=true;
                            break;
                        }
                    }
                    if (!flag) {
                        puts("Success");
                        ok[num]=1;
                        for (int i=0;i<vec[num].size();i++) {
                            factor[vec[num][i]]=num;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
