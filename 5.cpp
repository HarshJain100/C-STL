//Map:-
//Store Unique values.
//Sorted Order.
//Time Compexity: O(log(n))
//Complex data types can be used as key.

#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pair : m){
        cout<<pair.first<<" "<<pair.second<<endl;
    }
}
int main(){
    map<int,string> m;
    m[1]="ksu";
    m[8]="gwr";
    m[4]="jhi";
    m[8]="rty";
    print(m);
    cout<<endl;

    auto it=m.find(8);
    cout<<it->first<<" "<<it->second<<endl;
    if(it!=m.end()){
        m.erase(it);
    }
    // Alternate method: m.erase(8);
    cout<<endl;

    print(m);
    //m.clear() will clear the map.
}
