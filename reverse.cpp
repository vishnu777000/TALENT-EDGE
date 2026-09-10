#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void  rev(vector<int>&a,int n){
    int i=0,j=n-1;
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    b={1,2,3,4,5};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    rev(a,n);
    reverse(b.begin(),b.end());
    for(int x:a){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x:b){
        cout<<x<<" ";
    }

}