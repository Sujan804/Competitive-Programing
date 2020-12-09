#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl  "\n"
#define kajses return 0;
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
        IO
        int n;
        cin>>n;
        if(n>36){
            cout<<"-1"<<endl;
            kajses
        }
        for(int i=0;i<n/2;i++){
            cout<<8;
        }
        if(n%2)
            cout<<9;

        kajses

}

