#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
   stringstream ss(s);
    string s1;
    while(ss>>s1){
        reverse(s1.begin(),s1.end());
        cout<<s1<<" ";
    }
    return 0;
}