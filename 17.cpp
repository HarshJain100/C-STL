#include<bits/stdc++.h>
using namespace std;
bool isgreaterthan2(int x){
    return x>2;
}
int main(){
    vector<int> v={2,1,5,7};
    cout<<all_of(v.begin(),v.end(),[](int x){return x>2;})<<endl; 
    // check if all elements are greater than 2.

    cout<<any_of(v.begin(),v.end(),[](int x){return x>2;})<<endl;
    // check if any element is greater than 2.

    cout<<none_of(v.begin(),v.end(),[](int x){return x>2;})<<endl;
    // check if no element is greater than 2.


    //Alternate Method:-
    cout<<all_of(v.begin(),v.end(),isgreaterthan2)<<endl;
}