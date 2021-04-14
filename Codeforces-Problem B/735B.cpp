/** PUSH YOURSELF TO THE LIMIT**/
/*** Sujan Ahmed ***/
/**** Updated: 24-3-21||11:25 **/
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
const int N=1e6;
int aa[N+2];

int main(){

 ios_base::sync_with_stdio(0);cin.tie(0);
  int n,a,b;cin>>n>>a>>b;if(a>b)swap(a,b);

  for(int i=1;i<=n;i++)
    cin>>aa[i];
  sort(aa+1,aa+n+1,greater<int>());

  double sum=0,ans=0;
  for(int i=1;i<=a;i++)sum+=aa[i]*1.0;

  ans+=sum/(a*1.0);

  sum=0;
  for(int i=a+1;i<=a+b;i++)sum+=aa[i]*1.0;
  ans+=sum/(b*1.0);

  cout<<setprecision(10)<<fixed<<ans<<endl;

  return 0;

}
