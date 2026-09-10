// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    cout<<"Input time ra babu "<<endl;
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    int f=-1,l=-1;
    for(int i=0;i<n;i++){
        if(a[i]==k){
            if(f==-1 ){
                f=i;
                l=i;
            }
           else{
             l=i;
           }
        }
    }
cout<<f<<" "<<l;
    return 0;
}