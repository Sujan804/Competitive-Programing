#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long long a,b,x,y,cnt=0,g;
    cin>>a>>b>>x>>y;

     g  = __gcd(x,y);
     x = x/g;
     y = y/g;

    cout<<min(a/x,b/y)<<endl;


}
