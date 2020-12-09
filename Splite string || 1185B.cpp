#include<bits/stdc++.h>
using namespace std;
#define okay return 0;
#define endl "\n"
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vector<pair<char,int>> split( string s){
    char c = s[0];
    int cnt =1;
    vector<pair<char,int>>result;
    auto ss = s.c_str();
    for(int i =1;i <= int(s.length());i++){
        if(ss[i] != c){
            result.push_back({c,cnt});
            c = ss[i];
            cnt = 1;
        }else
            cnt++;
    }
    return result;
}
int main(){
    IO
    int n;
    cin>>n;
    while(n--){
        string s,t;
        cin>>s>>t;
        auto ta = split(t),sa = split(s);
        bool ok = sa.size()==ta.size();
        if(ok){
            for(int i =0;i<sa.size();i++){
                if(sa[i].first != ta[i].first || sa[i].second > ta[i].second)
                    ok = false;
            }
        }
        cout<<(ok ? "YES" :"NO")<<endl;



    }
    okay
}
