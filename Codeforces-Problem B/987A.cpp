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
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
 string x[10],s[10],ss[10];

  s[0]="purple";
  s[1]="green";
  s[2]="blue";
  s[3]="orange";
  s[4]="red";
  s[5]="yellow";

  x[0]="Power";
  x[1]="Time";
  x[2]="Space";
  x[3]="Soul";
  x[4]="Reality";
  x[5]="Mind";

  cin>>n;
  for(int i=0;i<n;i++)
    cin>>ss[i];
  cout<<6-n<<endl;
  for(int i=0;i<6;i++)
  {
    int f=0;
    for(int j=0;j<6;j++)
    {
      if(ss[j]==s[i])
        f=1;
    }
    if(f==0)cout<<x[i]<<endl;
  }
  return 0;
}
