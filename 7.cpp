//Set:-
//Can store same value again.
//Sorted Order.
//Time Compexity: O(log(n))
//Complex data types can be used as key.

#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    cout<<s.size()<<endl;
    for(auto &val : s){
        cout<<val<<endl;
    }
}
int main(){
    set<string> s;
    s.insert("ksu");
    s.insert("abr");
    s.insert("prt");
    s.insert("ksu");
    print(s);
    cout<<endl;

    auto it=s.find("prt");
    cout<<*it<<endl;
    if(it!=s.end()){
        s.erase(it);
    }
    // Alternate method: s.erase("prt");
    cout<<endl;

    print(s);
    //s.clear() will clear the set.
}

//Unordered Set:-
//Store Unique values.
//Random Order.
//Time Compexity: O(1) which is less campared to sets. 
//Complex data types cannot be used.

#include<bits/stdc++.h>
using namespace std;
void print(unordered_set<string> &s){
    cout<<s.size()<<endl;
    for(auto &val : s){
        cout<<val<<endl;
    }
}
int main(){
    unordered_set<string> st;
    st.insert("ksu");
    st.insert("abr");
    st.insert("prt");
    st.insert("ksu");
    print(st);
    cout<<endl;

    auto it=st.find("prt");
    cout<<*it<<endl;
    if(it!=st.end()){
        st.erase(it);
    }
    // Alternate method: s.erase("prt");
    cout<<endl;

    print(st);
    //s.clear() will clear the set.
}

//Multiset:-
//Can store same value again.
//Sorted Order.
//Time Compexity: O(log(n))
//Complex data types can be used as key.

#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<string> s;
    s.insert("ksu");
    s.insert("ady");
    s.insert("asy");
    s.insert("ksu");
    s.insert("ksr");

    //In following method s.erase() will delete given element only 1 time if it is repeated. 
    auto it=s.find("ksu");
    cout<<*it<<endl;
    if(it!=s.end()){
        s.erase(it);
    }

    //In following method s.erase() will delete all the repeatations of given element. 
    s.erase("ksu");

    for(auto &value : s){
        cout<<value<<endl;
    }
}