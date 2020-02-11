#include<iostream>
using namespace::std;

bool isItaVoyelle(char ch){
    if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='y'))
        return true;
    return false;
}
int main(){
    string phrase;
    do{
        cout<<"donner une phrase s'il vous plait: ";
        getline(cin,phrase);
    }while(phrase.length()>=80);
    for(int i=0;i<phrase.length();i++){
        if(isItaVoyelle(phrase[i]))
            phrase[i] = '.';
    }
    cout<<phrase<<endl;
    return 0;
}