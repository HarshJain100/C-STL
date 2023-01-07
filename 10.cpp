//Stack:-
//LIFO : Last In First Out.

#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    s.push(8);
    s.push(5);
    s.push(10);
    s.push(7);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}


//Queue:-
//FIFO : First In First Out.

#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<string> q;
    q.push("abs");
    q.push("tyu");
    q.push("uio");
    q.push("hjp");
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}