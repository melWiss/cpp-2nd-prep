#include<iostream>

using namespace::std;

int main(){
    int j = 0;
    string phrase;
    cout<<"donner phrase: "<<endl;
    cin>>phrase;
    for (int i = 0; i < phrase.length(); i++)
    {
        if((phrase[i] == " ")&&(phrase[j]) != " "){
            cout<<phrase.substr(j,i-1)<<endl;
            j = i+1;
        }
    }
    
    return 0;
}