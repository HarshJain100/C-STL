// For vectors and arrays:-

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v ={3,7,7,9,11};
    auto it = lower_bound(v.begin(),v.end(),12);
    if((it)==v.end()){
        cout<<"not found"<<endl;
    }
    else{
        cout<<(*it)<<endl;
    }
}

// Output:-
// 1-3 -> 3
// 4-7 -> 7
// 8-9 -> 9
// 10-11 -> 11
// 12-infinite -> not found


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v ={3,7,7,9,11};
    auto it = upper_bound(v.begin(),v.end(),8);
    if((it)==v.end()){
        cout<<"not found"<<endl;
    }
    else{
        cout<<(*it)<<endl;
    }
}

// Output:-
// 1-2 -> 3
// 3-6 -> 7
// 7-8 -> 9
// 9-10 -> 11
// 11-infinite -> not found


// For maps and sets:-

#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s ={3,7,7,9,11};
    auto it = s.lower_bound(6);
    if((it)==s.end()){
        cout<<"not found"<<endl;
    }
    else{
        cout<<(*it)<<endl;
    }
}

// Output:-
// 1-3 -> 3
// 4-7 -> 7
// 8-9 -> 9
// 10-11 -> 11
// 12-infinite -> not found


#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s ={3,7,7,9,11};
    auto it = s.upper_bound(9);
    if((it)==s.end()){
        cout<<"not found"<<endl;
    }
    else{
        cout<<(*it)<<endl;
    }
}

// Output:-
// 1-2 -> 3
// 3-6 -> 7
// 7-8 -> 9
// 9-10 -> 11
// 11-infinite -> not found

// In case of maps upper and lower bounds are found acc. to the key.