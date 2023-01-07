//Unordered Map:-
//Store Unique values.
//Random Order.
//Time Compexity: O(1). 
//Use this if order not required.
//Complex data types cannot be used as key.

#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,string> m;
    m[1]="ksu";
    m[8]="gwr";
    m[4]="jhi";
    m[8]="rty";
    
    // auto it=m.find(8);
    // cout<<it->first<<" "<<it->second<<endl;
    // if(it!=m.end()){
    //     m.erase(it);
    // }
    // m.erase(8);
    // cout<<endl;
    cout<<m.size()<<endl;
    for(auto &pair : m){
        cout<<pair.first<<" "<<pair.second<<endl;
    }
    //m.clear() will clear the map.
}

//Multimap:-
//Can store same value again.
//Sorted Order.
//Time Compexity: O(log(n))
//Complex data types can be used as key.
