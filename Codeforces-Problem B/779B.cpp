#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long
#define IOS  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int solve(ll n,int k){
    if(n==0)
        return 0;
    ll m=n;
    int temp,cnt=0;
    while(n!=0){
        if(k<=0)
            break;
        temp = n%10;
        n = n/10;
        if(temp==0){
            k--;
        }else{
            cnt++;
        }


    }

    if(k>0){
        int cnt2=0;
        while(m!=0){
            cnt2++;
            m /= 10;

        }
        return cnt2-1;

    }

    return cnt;

}

int main(){
    IOS
    ll n;
    int k;
    cin>>n>>k;
    cout<<solve(n,k)<<endl;


}
