#include <iostream>

using namespace ::std;

int main()
{
    int x;
    cout << "donner un valeur pour jouer: ";
    cin >> x;
    if ((x >= 56) && (x <= 78))
        cout << "Congratulations!";
    else
        cout << "You lose :(";
    return 0;
}