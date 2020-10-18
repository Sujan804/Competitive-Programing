#include<bits/stdc++.h>
using namespace std;
int prime_fact(int n){
    int sq = n/2;
    int rem = n;
    int result = 1;
    for(int i = 2;i<=sq;i++){
        if(n%i==0){
            result += i;
            }
        }



    return  result;

}
int main(){
 int n,i,num;
 cin>>n;
 for(i=0;i<n;i++){
    cin>>num;
    cout<<prime_fact(num)<<endl;
 }

}

