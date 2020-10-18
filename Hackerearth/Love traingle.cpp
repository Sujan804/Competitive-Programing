#include<bits/stdc++.h>
using namespace std;
int solve(long long int n){
    if(n<9){
        return n;
    }
    return n%9 + 10*solve(n/9);
}
int main(){
    long long int n;
    while(cin>>n){
        cout<<solve(n)<<endl;
    }


}
