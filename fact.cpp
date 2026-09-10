#include<iostream>
using namespace std;
long long  f(int n){
    if(n<0){
        return -1;
    }
    if(n==0 || n==1){
        return 1;
    }
    return n*f(n-1);
}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    long long a=f(n);
    if(a==-1){
        cout<<"Factorial of negative number is not defined"<<endl;

    }
    else{
        cout<<"Factorial of "<<n<<" is "<<a<<endl;
    }
}