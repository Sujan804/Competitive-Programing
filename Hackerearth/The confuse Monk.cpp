#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll MOD = 1e9 + 7;
int main();
int find_gcd(int arr[],int N){
    int res=arr[0],i;
    for(i=0;i<N;i++){
        res = __gcd(res,arr[i]);
    }
    return res;
}
ll find_mul(int arr[],int N){
    ll res = 1;
    int i;
    for(i=0;i<N;i++){
        res = (res*arr[i])%MOD;
    }
    return res;
}
ll bin_Expo(ll x, ll n){
    ll res = 1;
    while(n>0){
        if(n&1){
            res = (res*x)%MOD;
        }
        x = (x*x)%MOD;
        n >>= 1;
    }
    return res;
}
int main(){
    int N,i,g;
    ll f,res;
    cin>>N;
    int arr[N];
    for(int i =0;i<N;i++){
        cin>>arr[i];
    }
    g = find_gcd(arr,N);
    f = find_mul(arr,N);
    res = bin_Expo(f,g);
    cout<<res<<endl;



}
