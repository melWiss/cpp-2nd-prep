#include<iostream>
using namespace::std;
int main(){
    int tab[10],k,i;
    for(k=0;k<10;k++){
        do{
            cout<<"Donner le valeur de la case "<<k+1<<": ";
            cin>>tab[k];
        }while((tab[k]>9)&&(tab[k]<0));
    }
    cout<<"Donner la position i pour ajouter la valeur a cette position: ";
    cin>>i;
    for(int j=9;j>=i;j--){
        tab[j] = tab[j-1];
    }
    cout<<"Donner le valeur v: ";
    cin>>tab[i-1];
    for(int k = 0;k<10;k++)
        cout<<"["<<tab[k]<<"]";
    return 0;
}