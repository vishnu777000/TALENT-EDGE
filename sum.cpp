#include<iostream>
using namespace std;
int rsum(int a,int b){
     if(b==0){
        return a;
     } 
       return rsum(a+1,b-1);
}
int isum(int a,int b){
   
    for(int i=0;i<b;i++){
        a++;
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"recursive sum:"<<endl;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<rsum(a,b)<<endl;
    cout<<"iterative sum:"<<endl;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<isum(a,b)<<endl;
}