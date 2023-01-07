#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int> sym={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
string balance(string s){
    stack<char> st;
    for(auto &bracket:s){
        if(sym[bracket]<0){
            st.push(bracket);
        }
        else{
            if(st.empty()){
                return "No";
            }
            char top=st.top();
            st.pop();
            if(sym[top] + sym[bracket] != 0){
                return "No";
            }
        }
    }
    if(st.empty()){
        return "Yes";
    }
    else{
        return "No";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<balance(s)<<endl;
    }
}

// Output:-
// 2
// (({})){[]}
// Yes
// (([])))
// No