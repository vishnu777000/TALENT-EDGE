#include <iostream>
using namespace std;

long long  f(int n){
   
    if(n==0 || n==1){
        return 1;
    }
    return n*f(n-1);
}

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    double s=0;
    for(int i=1;i<=n;i++){
        long long a=f(i);
        double d=(double)i/a;
        s=s+(i+1)*d;
        if(i!=n)
        cout<<i+1<<"("<<i<<"/"<<i<<"!"<<")"<<"+";
        else
        cout<<i+1<<"("<<i<<"/"<<i<<"!"<<")";

    }
    cout<<"="<<s<<endl;
    
}
