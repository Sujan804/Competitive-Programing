/** PUSH YOURSELF TO THE LIMIT**/
/*** Sujan Ahmed ***/
/**** Updated: 12-04-21||11:25 **/
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
#define rep(i,a,b) for( int i=a;a<=b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll


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

/*bool isSorted(vi v,int n){
    int i,j;
    for(i=0;i<n-1;i++){
            if(v[i]>v[i+1])
                return false;
        }
    return true;
}

/*int check(vi v,int l,int u){
    int i,cnt=1;
    for(i=l;i<u;i++){
        cout<<v[i]<<' ';
        if(v[i]<=v[i+1])
            cnt++;
        else
            return cnt;
    }
    cout<<endl;
    return cnt;
}*/

/*void solve(){

        int n,i;
        cin>>n;
        vi vec(n);
        for(auto &t:vec){
             cin>>t;
        }

        if(isSorted(vec,n)){
            cout<<n<<endl;
            //cout<<"full"<<endl;
        }
        else{
               // cout<<check(vec,0,n/2)<<' '<<check(vec,(n/2)+1,n)<<endl;
            //cout<<max(check(vec,0,n/2),check(vec,(n/2)+1,n))<<endl;;
            int o1=1,o2=1;
            for(i=0;i<(n/2)-1;i++){
                if(vec[i]<=vec[i+1]){
                    o1++;
                }else{
                    break;
                }
            }
            for(i=n/2;i<n-1;i++){
                if(vec[i]<=vec[i+1]){
                    o2++;
                }else{
                    break;
                }
            }
            cout<<max(o1,o2)<<endl;



        }

}*/

const int N=1e6;
int arr[N+2];
bool isOk(int i, int j){
    bool f = 0;
    for(int k =i+1;k<=j;k++){
        if(arr[k]<arr[k-1])
            f=1;
    }
    return !f;
}
int dfs(int i,int j){
    if(isOk(i,j))
        return j-i+1;
    int mid = (i+j)/2;
    return max(dfs(i,mid),dfs(mid+1,j));
}


int main(){
    IO
    int n;cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    cout<<dfs(1,n)<<endl;
    return 0;


}

