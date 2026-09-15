#include<bits/stdc++.h>
using namespace std;
string vowel="aeiouAEIOU";
pair<int,int> vc(string s){
    int v=0,c=0;

    for(char x:s){
        if(vowel.find(x)!=-1){
            v++;
        }
        else{
            c++;
        }
    }
    return {v,c};
}
int main() {
      stringstream ss("I am a trainee");
    string s;
    int i=1;
    while(ss>>s){
        cout<<i<<" "<<s<<" "<<s.size()<<" ";
        auto p=vc(s);
        cout<<p.first<<" "<<p.second<<endl;
        i++;
    }
    return 0;
}