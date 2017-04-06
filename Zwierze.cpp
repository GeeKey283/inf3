#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "Zwierze.h"
using namespace std;

Zwierze::Zwierze(string imie)
{

        this->imie = imie;
        //...

}

Zwierze::~Zwierze()
{
   cout << "R.I.P zwierze " << imie << endl;
}



