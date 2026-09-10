#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x=a[0];
    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=x;
   for(int x:a){
    cout<<x<<" ";
   }
}