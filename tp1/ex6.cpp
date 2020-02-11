#include<iostream>
using namespace::std;



bool verifie(int a){
    if(((a-1)*(2-a))==0)
        return true;
    return false;
}
int main(){
    int x;
    cout<<"donner un entier x: ";
    cin>>x;
    if(verifie(x))
        cout<<"entier valide!"<<endl;
    else
        cout<<"entier est non valide :("<<endl;
    return 0;
}