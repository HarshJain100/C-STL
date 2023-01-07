#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> &v){
    int i;
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int N,i;
    cin>>N;
    vector<vector<int>> v;
    for(i=0;i<N;i++){
        int n,j;
        cin>>n;
        vector<int> temp;
        for(j=0;j<n;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for(i=0;i<N;i++){
        printvec(v[i]);
    }
}