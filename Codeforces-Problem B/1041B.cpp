#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,x,y,i,c=0,lcm;
    cin>>a>>b>>x>>y;
    float p,q;
    p=x/y;
    long long g=__gcd(x, y);
    lcm=(x*y)/g;
    long long yn=lcm/x;
    long long xn=lcm/y;
    for(i=1; xn*i<=a && yn*i<=b; i++)
    {
        q=(xn*i)/(yn*i);
        if(p==q)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}







