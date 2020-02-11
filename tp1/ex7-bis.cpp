#include<iostream>

using namespace::std;

bool prime(int x){
    int i=2;
    while((x%i!=0)&&(i<x/2)) i++;
    return x%i==0?false:true;
}

int main(){
    int n,i=0;
    do{
    cout<<"donner n: ";
    cin>>n;}while(n<1);
    while(n-1>0){
        i++;
        if(prime(i))
            n--;
    }
    cout<<i<<endl;
    return 0;
}