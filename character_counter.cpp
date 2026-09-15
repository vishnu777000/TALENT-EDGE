#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int d=0,l=0,u=0,sy=0,sp=0;
    for(char x:s){
        if(isdigit(x)){
            d++;
        }
        else if(islower(x)){
            l++;
        }
        else if(isupper(x)){
            u++;
        }
        else if(isspace(x)){
            sp++;
        }
        else{
            sy++;
        }
    }
    cout<<"Digits:"<<d<<endl;
    cout<<"Lower case:"<<l<<endl;
    cout<<"Upper case:"<<u<<endl;
    cout<<"Symbols:"<<sy<<endl;
    cout<<"Spaces:"<<sp<<endl;

    return 0;
}