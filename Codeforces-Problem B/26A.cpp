
// PUSH YOURSELF TO THE LIMIT
#include<bits/stdc++.h>
#define IO std::ios_base::sync_with_stdio(false);std::cin.tie();cout.tie(0);
#define ll long long
#define l64 __int64
#define mod 1000000007
#define maxN 1000000
using namespace std;
void solve(){
     int n;
    cin>>n;
    if(n<=5)
    {
        cout<<"0"<<endl;
        return;
    }
    int ans=0;
    for(int i=6;i<=n;i++)
    {
        int c=0;
        int t=i;
        for(ll j=2;j*j<=t;j++)
        {
            if((t%j)==0)
            {
                c++;
                while((t%j)==0)
                {
                    t/=j;
                }
            }
        }
        if(t>1)
        {
            c++;
        }
        if(c==2)
        {
            ans++;
        }
    }
    cout<<ans<<endl;

}
int main(){
   /* int t;
    cin>>t;
    while(t--){
        solve();
    } */
    solve();
    return 0;

}
