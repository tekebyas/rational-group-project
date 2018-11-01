#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
public:
    Rational();
    Rational(int a, int b);
    Rational add(Rational b);
    Rational subtract(Rational b);
    Rational multiply(Rational b);
    Rational divide(Rational b);
    int get_numerator();
    int get_denominator();
    void print();
private:
    int m_numerator, m_denominator;
};

#endif
