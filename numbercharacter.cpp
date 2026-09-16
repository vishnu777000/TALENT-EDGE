#include<bits/stdc++.h>
using namespace std;
int main() {
   string s;
    cin>>s;
    string o="";
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            int n=s[i]-'0';
           
            char c=(s[i-1]+n);
            if(c>122 || (c>90 && c<97)){
               c=c-26;
            }
        
            o=o+c;
        }
      else{
          o=o+s[i];
      }
    }
    cout<<o<<endl;

    return 0;
}
