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
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int n = a.size(), m = b.size();
    int res = n + m;
    for (int i = 0; i < n; ++i) {
        if(a[i] == b[i]) res -= 2;
        else break;
    }
    printf("%d\n", res);

    /*string str1,str2;
    cin>>str1>>str2;
    int cnt =0;
    int i,l;
    l = max(str1.size(),str2.size());
    for(i=0;i<2*l;i++){
        if(str1==str2){
            cout<<cnt<<endl;
            return;
        }
        if(str1.size()>=str2.size()){
            cnt++;
            str1.erase(str1.begin());
        }else{
            cnt++;
            str2.erase(str2.begin());
        }
    }*/

    /*while(str1 != str2 ){
       if(str1==str2){
            cout<<cnt<<endl;
            return;
        }
        if(str1.size()>=str2.size()){
            cnt++;
            str1.erase(str1.begin());
        }else{
            cnt++;
            str2.erase(str2.begin());
        }
    }*/
    //cout<<cnt<<endl;
    //str1.erase(str1.begin());
    //cout<<str1<<endl;
}



int main(){
    IO
    solve();

    return 0;


}
