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
    int n,d,i,j,cnt=0,temp;
    cin>>n>>d;
    bool flag = true;
    int f[d];
    string str[d];
    for(i=0;i<d;i++){
       cin>>str[i];
    }
    for(i=0;i<d;i++){
        flag=true;
        for(j=0;j<n;j++){
            if(str[i][j]=='0')
                flag=false;
        }
        if(!flag)
            f[i] =1;
        else
            f[i]=0;


    }
    int max = 0;
    for(i=0;i<d;i++){
        if(f[i] == 1){
            cnt++;
        }else{
            cnt=0;
        }
        if(cnt>max){
            max = cnt;
        }
    }

    cout<<max<<endl;



}



int main(){
    IO
    solve();

    return 0;


}
