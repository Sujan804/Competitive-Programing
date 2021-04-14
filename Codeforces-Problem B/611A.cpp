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

int t[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
    IO
    int x;
	scanf("%d", &x);
	char sl[15];
	scanf("%s", sl);
	scanf("%s", sl);
	if(sl[0] == 'w') {
	    int current = 5;
	    int ans = 0;
	    for(int i = 0; i < 366; ++i) {
	        if(current == x) ++ans;
	        ++current;
	        if(current > 7) current = 1;
	    }
	    printf("%d\n", ans);
		return 0;
	}
	int c = 0;
	for(int i = 0; i < 12; ++i) c += x <= t[i];
	printf("%d\n", c);
	return 0;


}
