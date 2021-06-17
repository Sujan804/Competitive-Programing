#include<bits/stdc++.h>
using namespace std;
const int maxN=10001;
vector<int>v[maxN];
int vis[maxN];
int d[maxN];
queue<int>q;
void bfs(int n){
  vis[n]=1;
  d[n]=0;
  q.push(n);
  while(!q.empty()){
    int f = q.front();
    q.pop();
    for(auto u:v[f]){
        if(vis[u])
            continue;
        vis[u]=1;
        d[u]=d[f]+1;
        q.push(u);
    }
  }
}
void solve(){
    int n,e,a,b;
    memset(vis,0,sizeof(vis));
    cin>>n>>e;
    for(int i=0;i<=n;i++)
        v[i].clear();
    while(e--){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs(1);
    cout<<d[n]<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }




}
