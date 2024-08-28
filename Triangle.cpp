#include "Triangle.h"
#include <iostream>
#include <string>
using namespace std;
Triangle::Triangle()
{
cout<<"Construction de Triangle"<<endl;
}
Triangle::~Triangle()
{
cout<<"Destruction de Triangle"<<endl;
}
void Triangle::sethauteur(int h)
{
    hauteur=h;
}
void Triangle::setcote1(int a)
{
    cote1=a;
}
void Triangle::setcote2(int b)
{
   cote2=b;
}
void Triangle::setcote3(int c)
{
    cote3=c;
}
void Triangle::setnom(string Nom)
{
  nom=Nom;
}
string Triangle::getnom()
{
    return nom;
}
void Triangle::afficher()
{
    int P;
    float A;
    A=(hauteur*cote2)/2;
    P=cote1+cote2+cote3;
    cout<<"Nom: "<<nom<<endl;
    cout<<"Aire:"<<A<<endl;
    cout<<"Perimetre:"<<P<<endl;

}
