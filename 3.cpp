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
        s=s+d;

    }
    cout<<"Sum of series is "<<s<<endl;
}
