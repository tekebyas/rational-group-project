#include<iostream>
#include "rational.h"

using namespace std;

int main()
{
    Rational a(2,3);
    Rational b(3,4);

    Rational c = a.add(b);
    Rational s = a.subtract(b);
    Rational m = a.multiply(b);
    Rational d = a.divide(b);

    c.print();
    s.print();
    m.print();
    d.print();
    
    return 0;
}
