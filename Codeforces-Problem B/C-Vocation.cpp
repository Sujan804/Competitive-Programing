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
//int N = 1e5;
int a[100005][4];
int dp[100005][4];
int n;
int func(int ind, int flag) {

	if (ind == n) return 0;

	if (dp[ind][flag] != -1) return dp[ind][flag];

	int maxi = 0;
	if (flag == 0) {
		maxi = max(maxi, a[ind][1] + func(ind + 1, 1));
		maxi = max(maxi, a[ind][2] + func(ind + 1, 2));
		maxi = max(maxi, a[ind][3] + func(ind + 1, 3));
	}
	else if (flag == 1) {
		maxi = max(maxi, a[ind][2] + func(ind + 1, 2));
		maxi = max(maxi, a[ind][3] + func(ind + 1, 3));
	}
	else if (flag == 2) {
		maxi = max(maxi, a[ind][1] + func(ind + 1, 1));
		maxi = max(maxi, a[ind][3] + func(ind + 1, 3));
	}
	else {
		maxi = max(maxi, a[ind][1] + func(ind + 1, 1));
		maxi = max(maxi, a[ind][2] + func(ind + 1, 2));
	}

	return dp[ind][flag] = maxi;
}

void solve(){
    //int n;
    cin>>n;

    rep(i,0,n){
        rep(j,1,4){
            cin>>a[i][j];
        }
    }
    mem1(dp);
    cout<<func(0,0)<<endl;





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
