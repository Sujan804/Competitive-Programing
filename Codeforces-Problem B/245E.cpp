#include <iostream>

using namespace std;

string s;
int MAX, MIN, pos;

int main()
{
	cin >> s;
	for (int i = 0 ; i < (int)s.size() ; i++)
		if (s[i] == '+')
		{
			pos++;
			MAX = max(pos, MAX);
		}
		else
		{
			pos--;
			MIN = min(pos, MIN);
		}
	cout << MAX - MIN << endl;
	return 0;
}
