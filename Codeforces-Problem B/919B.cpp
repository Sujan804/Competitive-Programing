#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll maxx = 11000000;
int sumOfDigits(int n){
    int sum =0;
    while(n){
        sum += n%10;
        n /= 10;

    }
    return sum;
}

int main(){
    IOS
    int n,cnt=0;
    cin>>n;
    for(int i=19;i<11000000;i+=9){
        if(sumOfDigits(i)==10){
            ++cnt;
            if(cnt==n){
                cout<<i<<endl;
                return 0;
            }
        }

    }


}
