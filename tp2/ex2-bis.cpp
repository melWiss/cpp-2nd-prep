#include <iostream>

using namespace std;

int main()
{
    int j = 0, i =0;
    int mot = 1;
    string phrase;
    cout << "donner phrase: " << endl;
    getline(cin, phrase);

    do
    {
        if ((i > j) && (phrase.substr(i, 1).compare(" ") || i == (phrase.length() - 1)))
        {
            cout << "mot" << mot << ": " << phrase.substr(j, i-1) << endl;
            j = i + 1;
            mot++;
        }
        while (phrase.substr(j, 1).compare(" ") && (j < phrase.length()))
            i = j++;
        i++;
    }while(i<phrase.length());

    return 0;
}