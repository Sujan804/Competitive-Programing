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
#define type1  testcase
bool isPalindrome(string string1,int n){
    int flag;
    for(int i=0;i < n ;i++){
        if(string1[i] != string1[n-i-1]){
            flag = 1;
            break;
   }
    }
    if (flag) {
        return 0;
    }
    else {
       return 1;
    }
}
bool isOk(string str){
    //int cnt =0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='0')
            return 0;
    }
    return 1;

}
void solve(){
    int n;
    string str1;
    cin>>n;
    cin>>str1;
    int A=0,B=0;
    int cn = 1;
    while(1){
        ll:
        if(isOk(str1)){
            break;
            //goto l;
        }
        if(isPalindrome(str1,n)){
            //str2 = str1;
            //reverse(str2.begin(),str2.end());
            for(int i=0;i<n;i++){

                if(str1[i]!='1'){
                    str1[i]='1';
                    goto s;
N
                }
            }
            s:
            if(cn&1){
                A++;
                cn++;
                goto ll;ac
            }else{
                B++;
                cn++;
                goto ll;
            }
        }else{
            reverse(str1.begin(),str1.end());
            cn++;

        }
        /*if(isOk(str1)){
         if(A<B){
        cout<<"ALICE"<<endl;
        }else if(B<A){
            cout<<"BOB"<<endl;
        }else{
            cout<<"DRAW"<<endl;
        }
        return;*/
    }
    l:
    if(A<B){
        cout<<"ALICE"<<endl;
        return;
    }else if(B<A){
        cout<<"BOB"<<endl;
        return;
    }else{
        cout<<"DRAW"<<endl;
        return;
    }







}

int main(){
    /*int t;
    cin>>t;
    while(t--)
    {
        solve();
    }*/
    solve();
    return 0;

}

