#include<iostream>

using namespace::std;

int main(){
    float ht, nbrKilos, tva, ttc;
    cout<<"donner le HT, le nombre de kilos de tomates achete et le tva: ";
    cin >>ht>>nbrKilos>>tva;
    ttc = ht*nbrKilos + (ht*nbrKilos/100)*tva;
    cout<<"ttc = "<<ttc;
    return 0;
}