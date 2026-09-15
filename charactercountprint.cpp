#include<bits/stdc++.h>
using namespace std;
int main() {
   unordered_map<char,int>mp;
    string s;
    cin>>s;
    for(char c:s){
        mp[c]++;
    }
    string s1="";
    for(auto it:mp){
        s1=s1+to_string(it.second)+it.first;
    }
    reverse(s1.begin(),s1.end());
    cout<<s1;
    return 0;
}
