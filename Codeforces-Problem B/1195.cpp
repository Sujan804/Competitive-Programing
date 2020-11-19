#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll n,k;
ll binSea(ll m){
    ll rem = n-m;
    ll total = (rem*(rem+1))/2;
    ll rem1 = total-m;
    if(rem1==k)
        return 0;
    else if(rem1>k)
        return 1;
    else
        return -1;



}
int main(){
    IOS
    cin>>n>>k;
    ll L=0,H=n;
    while(L<=H){
        ll mid = (L+H)/2;
        if(binSea(mid)==0){
            cout<<mid<<endl;
            return 0;
        }
        else if(binSea(mid)==1){
            L = mid+1;

        }
        else
            H = mid-1;

    }



}
