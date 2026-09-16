#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    string o="";
    getline(cin,s);
    for(char c:s){
        if(isalpha(c)){
            o=o+c;
        }
    }
    cout<<o<<endl;

    return 0;
}
