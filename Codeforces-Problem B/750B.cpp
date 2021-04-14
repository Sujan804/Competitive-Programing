
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
//#define mkp make_pair
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
    int n;
    cin>>n;
   vector< pair<int,string>>p(n);
   int i,j,temp;
   string str;
   for(i=0;i<n;i++){
        cin>>j>>str;
        /*if(str=="South" and j>20000){
            temp = j%20000;
            if((j/20000)%2==1){
                str = "North";
            }
            j = temp;

        }
        if(str=="North" and j>20000){
            temp = j%20000;
            if((j/20000)%2==1){
                str = "South";
            }
            j=temp;

        }*/
        p[i].ff = j;
        p[i].ss = str;

   }
   /*if(p[n-1].ss!="North"){
    cout<<"NO"<<endl;
    return;
   }*/
   int dFs=0;
   for(i=0;i<n;i++){
        //cout<<p[i].ff<<' '<<p[i].ss<<endl;
        if(j>20000||dFs<0||dFs>20000){
            cout<<"NO"<<endl;
            return;
        }
        if(p[i].ss == "South")
            dFs += p[i].ff;
        else if(p[i].ss == "North")
            dFs -= p[i].ff;
        else if(p[i].ss=="East" and (dFs==0 or dFs==20000)){
            cout<<"NO"<<endl;
            return;
        }
        else if(p[i].ss=="West" and (dFs==0 or dFs==20000)){
            cout<<"NO"<<endl;
            return;
        }


   }
   if(p[n-1].ss!="North"){
    cout<<"NO"<<endl;
    return;
   }
   if(dFs==0){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
   return;


}



int main(){
    IO
    solve();


}
