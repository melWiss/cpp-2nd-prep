#include<iostream>
using namespace::std;
bool itIsaNumber(string ch){
    int index=0;
    if((ch[index]!='1')&&(ch[index]!='2')&&(ch[index]!='3')&&(ch[index]!='4')&&(ch[index]!='5')&&(ch[index]!='6')&&(ch[index]!='7')&&(ch[index]!='8')&&(ch[index]!='9'))
        return false;
    else
        index++;
    do{
        if((ch[index]=='0')||(ch[index]=='1')||(ch[index]=='2')||(ch[index]=='3')||(ch[index]=='4')||(ch[index]=='5')||(ch[index]=='6')||(ch[index]=='7')||(ch[index]=='8')||(ch[index]=='9'))
            index++;
        else
            return false;
    }while(index<ch.length());
    return true;
}
int main(){
    int i;
    string ch;
    cout<<"donner une chaine: ";
    cin>>ch;
    itIsaNumber(ch)?cout<<ch<<endl:cout<<"not a number!"<<endl;
    return 0;
}