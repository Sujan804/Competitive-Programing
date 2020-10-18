#include<bits/stdc++.h>
#define ses return 0;
using namespace std;
int main(){
        long long i ,j;
        vector <long long > vec(100000,1);
        for(i=2;i<=100000;i++){
            for(j = i ; 100000/2; j+=i){
                vec[j] += i;
            }
        }
        int n;
        cin>>n;
        while(n--){
            cin>>i;
            cout<<vec[i]<<endl;
        }



}
