#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int n;
    cin>>n;
    cin>>str;
    int cntU=0,cntR=0;
    int MaxDiff = 0;
    for(int i=0;i<n;i++){
        if(str[i]=='U')
            cntU++;
        else
            cntR++;
        MaxDiff = max(MaxDiff,abs(cntU-cntR));

    }
    cout<<MaxDiff<<endl;
    return 0;
}
