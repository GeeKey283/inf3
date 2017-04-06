#ifndef ZWIERZE_H
#define ZWIERZE_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;




class Zwierze
{
    public:
    Zwierze(string imie);
    virtual ~Zwierze() ;
    virtual void glos() {};
    virtual void losujmase(){};
    string imie;
    int masa;
};

class Koza : public Zwierze{
    public:
    Koza(string imie) : Zwierze(imie) {}
    virtual ~Koza() { cout << "R.I.P koza " << imie << endl; }
    virtual void glos(){cout<<imie<< ":" << "MEEE"<<endl;}
};
class Owca : public Zwierze {
    public:
    Owca(string imie) : Zwierze(imie) {}
    virtual ~Owca() { cout << "R.I.P owca " << imie << endl; }
    virtual void glos() { cout << imie << ": " << " BeeeeEEEE!" << endl; }
};
class Forfiter : public Zwierze {
    public:
    Forfiter(string imie) : Zwierze(imie) {}
    virtual ~Forfiter() { cout << "R.I.P Forfiter " << imie << endl; }
    virtual void glos() { cout << imie << ": " << " szwagier!" << endl; }
};
class Langusta : public Zwierze {
    public:
    Langusta(string imie) : Zwierze(imie) {}
    virtual ~Langusta() { cout << "R.I.P Langusta " << imie << endl; }
    virtual void glos() { cout << imie << ": " << " Krrk!" << endl; }
};



#endif // ZWIERZE_H
