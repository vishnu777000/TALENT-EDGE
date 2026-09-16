#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    string s1;
    cin>>s1;
    string o="";
    int i=0;
    int j=s1.size()-1;
    while(i<s.size() && j>=0){
        o=o+s[i]+s1[j];
        i++;
        j--;
    }
    
    cout<<o<<endl;
    return 0;
}
