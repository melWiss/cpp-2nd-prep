#include<iostream>
#include<malloc.h>

using namespace std;

typedef struct{
    float x;
    float y;
}Point;

Point saisirPoint(int k){
    Point p;
    cout<<"donner le X et le Y d'un point "<<k+1<<": "<<endl;
    cin>>p.x>>p.y;
    return p;
}

void affichPoint(Point p){
    cout<<"{ X = "<<p.x<<"; Y = "<<p.y<<"}"<<endl;
}



int main(void){
    int tabLength;
    cout<<"donner la taille de tableau des points: "<<endl;
    cin>>tabLength;
    Point tabPoints[tabLength];
    for (int i = 0; i < tabLength; i++)
        tabPoints[i] = saisirPoint(i);
    for (int i = 0; i < tabLength; i++)
        affichPoint(tabPoints[i]);
    
    Point* tabDynamic = (Point*)malloc(tabLength * sizeof(Point));

    for(Point* j=tabDynamic; j < tabDynamic+tabLength; j++)
    {
        *j = saisirPoint(j - tabDynamic);
    }

    for(Point* j=tabDynamic; j < tabDynamic+tabLength; j++)
        affichPoint(*j);
}