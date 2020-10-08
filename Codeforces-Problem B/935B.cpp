#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cntR=0,cntU=0,result=0,i;
    string str;
    cin>>n;
    cin>>str;
    for(i=0;i<n-1;i++){
        if(str[i]=='U')
            cntU++;
        else if(str[i]=='R')
            cntR++;

        if(cntU==cntR&&str[i]==str[i+1]){
            result++;
        }
    }
    cout<<result<<endl;


}
