#include <bits/stdc++.h>
#define mod 1000003
#define ull unsigned long long
using namespace std;

int main() {
	int num,arr[1000004];
	arr[0]=1;
	long long i,ans;
	for(i=1;i<1000004;i++)
	{
		arr[i]=(arr[i-1]*i)%mod;
	}
	cin >> num;
	while(num--)
	{
		ull n,x;
		cin>>n>>x;
		if(n>=mod){
			ans = 0;
		}else{
			ans = x*arr[n];
		}
		cout<< ans%mod << endl;
	}
}
