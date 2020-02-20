#include<iostream>

using namespace::std;

string giveMeVerbe(){
    string v;
    do{
        cout<<"donner moi un verbe qui se termine par 'er': ";
        cin>>v;
    }while((v[v.length()-2]!='e')||(v[v.length()-1]!='r'));
    return v;
}
void translate(string v){
    cout<<"Je "<<v.substr(0,v.length()-1)<<endl;
    cout<<"Tu "<<v.substr(0,v.length()-1)<<"s"<<endl;
    cout<<"Il/Elle "<<v.substr(0,v.length()-1)<<endl;
    cout<<"Nous "<<v.substr(0,v.length()-1)<<"ons"<<endl;
    cout<<"Vous "<<v.substr(0,v.length()-1)<<"z"<<endl;
    cout<<"Ils/Elles "<<v.substr(0,v.length()-1)<<"nt"<<endl;
}
int main(){
    string verbe;
    verbe = giveMeVerbe();
    translate(verbe);
    return 0;
}