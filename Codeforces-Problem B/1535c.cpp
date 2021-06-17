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
void solve(){

    string str;
    cin>>str;
    int n = str.size();
    char c = '0';
    int pos;
    for(int i=n-1;i>=0;i--){
        if(str[i]!='?'){
            c = str[i];
             pos = i;

        }
    }
    char cc = c;
    if(c=='0'){
        c='1';
    }else{
        c='0';
    }

    for(int i=pos+1;i<n;i++){
        if(str[i]=='?'){
            str[i]== c;
            if(c=='0'){
                c='1';
            }else{
                c='0';
                }


        }

    }
    for(int i = pos-1;i>=0;i--){
        if(str[i]=='?'){
            if(str[i+1]=='0'){
                str[i]='1';
            }else{
                str[i]='0';
                }
        }
    }
    cout<<str<<endl;


    /*int cnt = 0;
    for (int len = 1; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;
            bool flag = true;
            for (int k = i+1; k <= j; k++){
                 if((str[k-1]=='1'&&str[k]=='1')||(str[k-1]=='0'&&str[k]=='0')){
                    flag = false;
                    break;
                 }
                 if((str[k-1]=='?'&&str[k]=='?')&&(str[k-2]==str[k+1])){
                     flag = false;
                    break;
                 }
                 if( (str[k-1]=='1'&&str[k]=='?'&&str[k+1]=='0')|| (str[k-1]=='0'&&str[k]=='?'&&str[k+1]=='1')){
                    flag = false;
                    break;
                 }
            }
            if(flag)
                cnt++;
                //cout << str[k];

           // cout << endl;
        }
    }
    cout<<cnt<<endl;*/


}

int main(){
    IO
    TC
   {
        //cout << "Case #" << ++CT <<": " ;
        solve();
    }
    //solve();
    return 0;

}



