#include<iostream>
using namespace::std;

bool prime(int x){
    int i=2;
    while((x%i!=0)&&(i<x/2)) i++;
    return x%i==0?false:true;
}

int main(){
    int k;
    cout<<"donner k: ";
    cin>>k;
    prime(k)?cout<<"PRIME":cout<<"NOT PRIME";
    return 0;
}