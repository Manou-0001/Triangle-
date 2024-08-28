#include <iostream>
#include "Triangle.h"
#include <string>
using namespace std;
int main()
{
    Triangle trian1= Triangle();
    trian1.sethauteur(7);
    trian1.setcote1(1);
    trian1.setcote2(3);
    trian1.setcote3(4);
    trian1.nom="triangle1";
    trian1.afficher();
    return 0;

}
