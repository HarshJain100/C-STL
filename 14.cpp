#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return (a > b);
}
int main(){
    int n,i;
    cin>>n;
    vector<int> v;
    for(i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto val:v){
        cout<<val<<" ";
    }
}


// #include<bits/stdc++.h>
// using namespace std;
// bool cmp(pair<int,int> a,pair<int,int> b){
//     if(a.first != b.first){
//         return a>b;
//     }
//     else{
//         return a<b;
//     }
// }
// int main(){
//     int n,i;
//     cin>>n;
//     vector<pair<int,int>> v;
//     for(i=0;i<n;i++){
//         int x,y;
//         cin>>x>>y;
//         v.push_back({x,y});
//     }
//     sort(v.begin(),v.end(),cmp);
//     for(auto val:v){
//         cout<<val.first<<" "<<val.second<<endl;
//     }
// }