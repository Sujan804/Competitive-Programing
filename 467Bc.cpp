#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false)
    cin.tie(NULL);
    cout.tie(NULL)
    int n,m,k,i,j,x,cnt,cnt_fr=0,y,z;
    cin>>n>>m>>k;
    int a[m+10];
    for(i=0;i<=m;i++)
        cin>>a[i];
    for(i=0;i<m;i++){
        x=a[i]^a[m];
        cnt=0;
        for(j=0;j<=n;j++){
           y=1<<j;
           z=x&y;
           if(z==y)
              cnt++;
        }
        if(cnt<=k)
            cnt_fr++;
    }
    cout<<cnt_fr<<endl;
    return 0;
}
