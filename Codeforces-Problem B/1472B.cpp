// PUSH YOURSELF TO THE LIMIT
#include<bits/stdc++.h>
#define IO std::ios_base::sync_with_stdio(false);std::cin.tie();cout.tie(0);
#define ll long long
#define l64 __int64
#define mod 1000000007
#define maxN 1000000
using namespace std;
void solve(){
    int n,sum=0,temp,i,cnt2=0,cnt1=0;
    cin>>n;
    for(i = 0;i<n;i++){
        cin>>temp;
        if(temp==2)
            cnt2++;
        else
            cnt1++;
        sum += temp;

    }
    if(sum%2){
        cout<<"NO"<<endl;
    }else if(cnt2%2){
        if(cnt1>=2){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;

}
