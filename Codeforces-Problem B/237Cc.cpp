#include<bits/stdc++.h>
using namespace std;
int vis[1000005],sum[1000005];
int a,b,k;
void prime(int x)
{
    for(int i=2;i<=b;i++)
    {
        for(long long j=(long long)i*(long long)i;j<=b;j+=i)
            vis[j]=0;
    }
}
int main()
{
    cin>>a>>b>>k;
    for(int i=2;i<=b;i++)
        vis[i]=1;
    prime(b);
    sum[a-1]=0;
    for(int i=a;i<=b;i++)
    {N
        sum[i]=sum[i-1]+vis[i];
    }
    if(sum[b]<k)
    {
        cout<<-1<<endl;
        return 0;
    }
    int l=1;
    for(int i=a-1;i<=b-l;i++)
    {
        while (l>= 1 && l <= b-a + 1 && i + l <= b && sum [i + l]-sum [i] <k) // Note Condition
        {
                l++;

        }
    }
    cout<<l<<endl;
    return 0;
}
