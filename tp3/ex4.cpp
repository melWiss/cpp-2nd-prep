#include <iostream>

using namespace std;

typedef struct
{
    string nom;
    string prenom;
    long long int telephone;
    void setTel()
    {
        long long int tel;
        int j;
        do
        {
            cout << "donner le numero de telephone de " << prenom << " " << nom << ":" << endl;
            cin >> telephone;
            tel = telephone;
            j = 1;
            while (tel > 0)
            {
                j++;
                tel /= 10;
            }
            j--;
        } while (j != 8);
    }
    bool verif(string b)
    {
        int i = 0;
        while (b.length() > 0 && i < b.length() && ((b[i] > 64 && b[i] < 91) || (b[i] > 96 && b[i] < 123)))
            i++;
        if (i == b.length())
            return true;
        else
            return false;
    }
    void setNom()
    {
        do
        {
            cout << "Donner le nom :" << endl;
            cin >> nom;
        } while (!verif(nom));
        nom[0] = toupper(nom[0]);
    }
    void setPrenom()
    {
        do
        {
            cout << "Donner le prenom :" << endl;
            cin >> prenom;
        }while (!verif(prenom));
        prenom[0] = toupper(prenom[0]);
    }

    void affich()
    {
        cout << "Nom: " << nom << endl
             << "Prenom: " << prenom << endl
             << "Telephone: " << telephone << endl;
    }
} Contact;

int main(void)
{
    int n;
    cout << "Donner le nombre de contacts: " << endl;
    cin >> n;
    Contact contacts[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ecrire les donnees de contact " << i + 1 << endl;
        contacts[i].setNom();
        contacts[i].setPrenom();
        contacts[i].setTel();
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Les donnees de contact " << i + 1 << endl;
        contacts[i].affich();
    }
}