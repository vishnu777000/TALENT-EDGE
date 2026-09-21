#include<bits/stdc++.h>
using namespace std;
int main() {
   vector<int>nums={1,2,3};
    int n=nums.size();
    vector<int>ans(2*n);
    for(int i=0;i<n;i++){
        ans[i]=ans[i+n]=nums[i];
    }
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}
