#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[10]={0};
    while(n>0){
       a[n%10]++;
        n=n/10;
    }
    for(int j=9;j>=0;j--){
        while(a[j]--){
            cout<<j;
        }
    }
    return 0;
}