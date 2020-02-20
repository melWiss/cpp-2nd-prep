#include <iostream>

using namespace std;

int main()
{
    int j = 0, i =0;
    int mot = 1;
    string phrase;
    cout << "donner phrase: " << endl;
    getline(cin, phrase);

   
   while (i<phrase.length()&&phrase.substr(i,phrase.length()).find(' '))
   {
       cout<<"mot"<<mot++<<": "<<phrase.substr(i,i=phrase.substr(i,phrase.length()).find(' '));
       
       /* code */
   }
   

    return 0;
}