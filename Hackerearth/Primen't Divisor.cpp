

#include <bits/stdc++.h>
using namespace std;


vector<int> getFactorization(long long x)
{
	int count = 0;
	vector<int> v;
	while (x % 2 == 0) {
		count++;
		x = x / 2;
	}
	if (count != 0)
		v.push_back(count);
	for (int i = 3; i <= sqrt(x); i += 2) {
		count = 0;
		while (x % i == 0) {
			count++;
			x /= i;
		}
		if (count != 0)
			v.push_back(count);
	}


	if (x > 1) {
		v.push_back(1);
	}
	return v;
}

int nonPrimeDivisors(long long N)
{
	vector<int> v = getFactorization(N);
	int ret = 1;
	for (int i = 0; i < v.size(); i++)
		ret = ret * (v[i] + 1);

	ret = ret - v.size();
	return ret;
}

int main()
{
	int T;
	cin>>T;
	while(T--){
	    long N;
        cin>>N;
        cout << nonPrimeDivisors(N) << endl;
	}


	return 0;
}
