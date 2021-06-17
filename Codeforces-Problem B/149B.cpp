#include <bits/stdc++.h>
#define ll long long
#define inf 0x3f3f3f3f
using namespace std;
string s,s1,s2;
int tr(char c)
{
	if(c>='0'&&c<='9')
		return (c-'0');
	else
		return (c-'A'+10);
}
bool check(int num)
{
	int sum1=0,sum2=0;
	int tmp=1;
	for(int i=s1.size()-1;i>=0;i--)
	{
		sum1+=tr(s1[i])*tmp;
		tmp*=num;
	}
	tmp=1;
	for(int i=s2.size()-1;i>=0;i--)
	{
		sum2+=tr(s2[i])*tmp;
		tmp*=num;
	}
	if(sum2>=60||sum1>=24)
	return false;
	return true;
}
int main()
{
	cin>>s;
	int maxx=-1;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==':')
		{
			s1=s.substr(0,i);
			s2=s.substr(i+1,s.size()-i-1);
		}
		else
		{
			maxx=max(maxx,tr(s[i]));
		}
	}
	while(*s1.begin()=='0')
	s1.erase(s1.begin());
	while(*s2.begin()=='0')
	s2.erase(s2.begin());
	if(s1.size()<=1&&s2.size()<=1&&tr(s1[0])<24&&tr(s2[0])<60)
	{
		printf("-1\n");
	}
	else if((s1.size()<=1&&s2.size()<=1)&&(tr(s1[0])>=24||tr(s2[0])>=60))
	{
		printf("0\n");
	}
	else
	{
		if(check(maxx+1)==false)
		{
			printf("0\n");
			return 0;
		}
		for(int num=maxx+1;;num++)
		{
			if(check(num))
			printf("%d ",num);
			else
			break;
		}
	}
}
