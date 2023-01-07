#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>> v={{1,2},{6,8},{4,5}};

    vector<pair<int,int>> :: iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<(*it).first<<" "<<it->second<<endl;
    }

    // for(auto it=v.begin();it!=v.end();it++){
    //     cout<<(*it).first<<" "<<it->second<<endl;
    // }

    for(auto &value : v){
        cout<<value.first<<" "<<value.second<<endl;
    }
}