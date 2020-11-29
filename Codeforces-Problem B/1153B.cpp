#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define kajses return 0;
#define endl "\n";
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    int n,m,h;
    cin>>n>>m>>h;
    int length[m];
    int width[n];
    int matrix[n][m];
    int result[n][m];
    for(int i= 0;i<m;i++){
        cin>>length[i];
    }
    for(int i=0;i<n;i++){
        cin>>width[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
            result[i][j] = matrix[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[j][i]==1){
                matrix[j][i] = length[i];
            }
        }
    }
   for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(matrix[i][j]>width[i])
            {
                matrix[i][j]=width[i];
            }
        }
    }
    //cout<<endl;
    for(int i=0;i<n;i++){
        for(int  j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}
