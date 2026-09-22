#include<bits/stdc++.h>
using namespace std;
int main() {
    map<char,int>mp;
    string s="ViBNsVshnu";
    for(char c:s){
        mp[c]++;
    }
    for(char c:s){
        if(mp[c]==1){
            cout<<c;
            break;
        }
    }
    return 0;
}
