#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    string s1;
    cin>>s1;
    string o="";
    int n=max(s1.size(),s.size());
    for(int i=0;i<n;i++){
        if(i<s.size()){
            o=o+s[i];
        }
        if(i<s1.size()){
            o=o+s1[i];
        }
    }
    cout<<o<<endl;
    return 0;
}
