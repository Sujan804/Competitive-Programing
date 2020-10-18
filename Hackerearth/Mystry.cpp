#include<bits/stdc++.h>
#define  ll long long int
#define IO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int cntDiv(ll n){
    int i,res =0;
    for(i=1;i<=sqrt(n);i++){
        if(n%i==0){
            res += 2;
        }
        if(i == sqrt(n)){
            res--;
        }
    }
    return res;
}
int main(){
    IO
    int T;
    ll n;
    cin>>T;
    while(T--){
        cin>>n;
        cout<<cntDiv(n)<<endl;
    }
}
