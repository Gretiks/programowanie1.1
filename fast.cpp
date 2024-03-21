#include <iostream>
#include "class1.h"
#include "class2.h"
using namespace std;
int main()
{
    klasa1 k1 = klasa1();
    klasa1 kopia1(k1);

    klasa2 k2 = klasa2();
    klasa2 kopia2(k2);


    cout << k1.wsk << " wskaznik do k1\n";
    cout << &k1.a << " adres do k1\n";
    cout << kopia1.wsk << " wskaznik do kopi1\n";
    cout << &kopia1.a << " adres do kopi1\n";
    cout << k2.wsk << " wskaznik do k2\n";
    cout << &k2.a << " adres do k2\n";
    cout << kopia2.wsk << " wskaznik do kopi2\n";
    cout << &kopia2.a << " adres do kopi2\n";
}