#include<bits/stdc++.h>

using namespace std;

int main(){

ios::sync_with_stdio(0);

cin.tie(0);

cout.tie(0);

int t;cin>>t;

while(t--){

int n;cin>>n;

int count=0;

for(int i=1;i*i<=n;++i){

if(n%i==0) count+=2;

if(i*i==n) count--;

}

cout<<count<<endl;

}

}
