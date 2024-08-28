#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED
#include <string>
using namespace std;

class Triangle
{
    public:
        Triangle();
        ~Triangle();
        void sethauteur(int h);
        void setcote1(int a);
        void setcote2(int b);
        void setcote3(int c);
        void setnom(string Nom);
    string getnom();
    void afficher();
    private:
        string nom;
        int hauteur,cote1,cote2,cote3;
};


#endif // TRIANGLE_H_INCLUDED
