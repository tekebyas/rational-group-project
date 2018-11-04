/*
    Authors: Teke Byas, Jacob McGuire, Lucas Sowers, and Marianna Delrio
    File: rational.cpp
    Date of Creation: Thursday, November 1, 2018
    Description: This file holds the workings of a class 'Rational' that allows the creation of rational numbers,
        addition, subtraction, multiplication, and division of rational numbers, and the printing of the numerator
        and denominator from the rational number as well as the rational number in the form a/b.
*/
#include<iostream>
#include<cassert>
#include "rational.h"

Rational::Rational()
{
    m_numerator = 0;
    m_denominator = 1;
}
Rational::Rational(int a, int b)
{
    m_numerator = a;
    assert(m_denominator != 0);
    m_denominator = b;
}

Rational Rational::add(Rational r)
{
    int numerator, denominator;
    int a = get_numerator();
    int b = get_denominator();
    int c = r.get_numerator();
    int d = r.get_denominator();
    numerator = ((a * d) + (c * b));
    denominator = b * d;
    return Rational(numerator, denominator);
}
Rational Rational::subtract(Rational r)
{
    int numerator, denominator;
    int a = get_numerator();
    int b = get_denominator();
    int c = r.get_numerator();
    int d = r.get_denominator();
    numerator = ((a * d) - (c * b));
    denominator = b * d;
    return Rational(numerator, denominator);
}
Rational Rational::multiply(Rational r)
{
    int numerator = m_numerator * r.get_numerator();
    int denominator = m_denominator * r.get_denominator();
    return Rational(numerator, denominator);
}
Rational Rational::divide(Rational r)
{
    int numerator = m_numerator * r.get_denominator();
    int denominator = m_denominator * r.get_numerator();
    return Rational(numerator, denominator);
}
int Rational::get_numerator()
{
    return m_numerator;
}
int Rational::get_denominator()
{
    return m_denominator;
}
void Rational::print()
{
    std::cout << m_numerator << "/" << m_denominator << std::endl;
}
