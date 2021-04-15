/** PUSH YOURSELF TO THE LIMIT**/
/*** Sujan Ahmed ***/
/**** Updated: 12-04-21||11:25 **/
#include<bits/stdc++.h>
#define IO std::ios_base::sync_with_stdio(false);std::cin.tie(nullptr);cout.tie(nullptr);
#define endl "\n"
#define l64 __int64
#define mod 1000000007
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
#define rep(i,a,b) for( int i=a;a<=b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll


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

const int N = 1e3+6;
int in[N],memo[N][N];
int n,m;
/*bool dp(vi v,m,){
    bool d;
    if(if(sum%m==0))
        return true;
    d = dp()


}*/
void dp(int i, int s){
    if(i>n)
        return;
    if(memo[i][s] != -1)
        return ;
    memo[i][s] =0;

    int x = (s+in[i])%m;
    if(x==0){
        puts("YES");
        exit(0);
    }
    dp(i+1,s);
    dp(i+1,x);
}
/*int solve(){
    int n,m;
    cin>>n>>m;
    if(n>m) return !printf("YES\n");
    for(int i=0;i<n;i++){
        cin>>in[i];
        in[i] %= m;
    }
    memset(memo,-1, sizeof memo);
    dp(1,0);
    puts("NO");
    return 0;
}
*/

int main(){
    scanf("%d %d", &n, &m);
	if(n > m) return !printf("YES\n");

	for(int i = 1; i <= n; ++i) {
		scanf("%d", in + i);
		in[i] %= m;
	}

	memset(memo, -1, sizeof memo);
	dp(1, 0);
	puts("NO");


}
