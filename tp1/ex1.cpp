#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace::std;
int main(int argc, char** argv) {
	int x,y,p,s;
	cout<<"donner le longuer et le largeur: ";
	cin>>x>>y;
	p = (x + y)*2;
	s = x*y;
	cout<<"le perimetre est "<<p<<" et le surface egale a "<<s;
	return 0;
}
