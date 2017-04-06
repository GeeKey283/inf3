#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "Zwierze.h"

using namespace std;

string losujImie()
{
    switch(rand()%7)
    {
        case 0: return "Matylda";
        case 1: return "Zocha";
        case 2: return "Stefan";
        case 3: return "Andrzej";
        case 4: return "Popierduka";
        case 5: return "Zdzichu ";
        case 6: return "Gajusz ";
    }
    throw -666;
    //return "???";
}
Zwierze* wyprodukujZwierza()
{
    switch(rand() % 4)
    {
        case 0: return new Koza(losujImie()); break;
        case 1: return new Owca(losujImie()); break;
        case 2: return new Forfiter(losujImie()); break;
        case 3: return new Langusta(losujImie()); break;
    }throw -666;
}



int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
