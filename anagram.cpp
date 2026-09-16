// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;
bool isana(string s1,string s2){
    if(s1.size()!=s2.size()){
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return (s1==s2)?true:false;
}
int main() {
   string s1,s2;
    cin>>s1>>s2;
    if(isana(s1,s2)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
