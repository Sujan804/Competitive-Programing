#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define kajses return 0;
#define endl "\n"
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    IO
    int n,sum=0,cnt=0;;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    sort(arr,arr+n);
    float avg;
    avg = (float)sum/n;
    if(avg>=4.5){
        cout<<cnt<<endl;
            kajses
        }

    for(int i=0;i<n;i++){

        sum += 5-arr[i];
        cnt++;
        avg = (float)sum/n;
        if(avg>=4.5){
            cout<<cnt<<endl;
            kajses
        }


    }
}
