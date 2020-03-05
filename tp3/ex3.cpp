#include <iostream>
#include <math.h>
#include <malloc.h>

using namespace std;

typedef struct Complexe
{
    float real, img;
    double imaginaire()
    {
        return img;
    }
    double realNumber()
    {
        return real;
    }
    double argument()
    {
        return sqrt(pow(img, 2) + pow(real, 2));
    }
    void appear()
    {
        cout << real << " + i" << img << endl;
    }
    Complexe multiplication(Complexe z)
    {
        Complexe result;
        double w,x,y,t;
        w = real * z.real;
        x = real * z.img;
        y = img * z.real;
        t = -(img * z.img);
        result.real = w + t;
        result.img = x + y;
        return result;
    }
} Complexe;

int main(void)
{
    Complexe complexe, complexe2;
    Complexe* zix;
    zix = (Complexe*)malloc(sizeof(Complexe));
    cout << "donner le real et l'imaginaire d'un nombre complexe: " << endl;
    cin >> complexe.real >> complexe.img;
    cout << "donner le real et l'imaginaire d'un nombre complexe: " << endl;
    cin >> complexe2.real >> complexe2.img;
    zix->real = complexe2.real;
    zix->img = complexe2.img;
    complexe.appear();
    complexe2.appear();
    cout<<complexe.imaginaire()<<endl<<complexe.realNumber()<<endl<<complexe.argument()<<endl;
    complexe.multiplication(complexe2).appear();
    complexe.multiplication(*zix).appear();
}