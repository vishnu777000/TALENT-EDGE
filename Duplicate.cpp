#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    
   vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
   set<int>s;
    bool f=true;
    for(int x:nums){
        if(s.contains(x)){
          bool f=false;
        }
        s.insert(x);
    }
    if(f) cout<<"False"<<endl;
    else cout<<"True"<<endl;
    return 0;
}
