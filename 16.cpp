#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    vector<int> v;
    for(i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int min=*min_element(v.begin(),v.end());
    cout<<"min is "<<min<<endl;
    int max=*max_element(v.begin(),v.end());
    cout<<"max is "<<max<<endl;
    int sum=accumulate(v.begin(),v.end(),0); // 0 is initial value.
    cout<<"sum is "<<sum<<endl;
    int ct=count(v.begin(),v.end(),4); // 4 is element of required frequency.
    cout<<"count is "<<ct<<endl;
    auto it=find(v.begin(),v.end(),4); // 4 is element to be found.
    if(it==v.end()){
        cout<<"not present"<<endl;
    }
    else{
        cout<<"element is "<<(*it)<<endl;
    }
    reverse(v.begin(),v.end());
    for(auto val:v){
        cout<<val<<" ";
    }
    cout<<endl;
    string s="jgdhnmsbv";
    reverse(s.begin()+2,s.end());
    cout<<s<<endl;
}