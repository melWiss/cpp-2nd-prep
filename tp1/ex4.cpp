#include<iostream>
using namespace::std;
int main(){
    int tab[10],x,i;
    for(i=0;i<10;i++){
        cout<<"Donner le valeur "<<i+1<<": ";
        cin>>tab[i];
    }
    cout<<"Donner le valeur a rechercher: ";
    cin>>x;
    i=0;
    while(tab[i] != x)
        i++;
    for(int j=i;j<9;j++)
        tab[j]=tab[j+1];
    tab[9]=0;
    for(int k = 0;k<9;k++)
        cout<<"["<<tab[k]<<"]";
    return 0;
}