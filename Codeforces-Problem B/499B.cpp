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

void solve(){
    int n,m,i,j;
    cin>>n>>m;
    //vector<string>v1,v2;
    string ar1[m],ar2[m],ar3[n],ar4[m];
    for(i=0;i<m;i++){
        cin>>ar1[i];
        cin>>ar2[i];
        if(ar2[i].size()<ar1[i].size()){
            ar4[i]= ar2[i];
        }else{
            ar4[i]=ar1[i];
        }

    }
    for(i=0;i<n;i++){
        cin>>ar3[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(ar3[i]==ar1[j]){
                cout<<ar4[j]<<' ';
            }
        }
    }




}



int main(){
    IO
    solve();

    return 0;


}
