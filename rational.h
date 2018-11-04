/*
    Authors: Teke Byas, Jacob McGuire, Lucas Sowers, and Marianna Delrio
    File: rational.h
    Date of Creation: Thursday, November 1, 2018
    Description: This file holds the outline of a class 'Rational' that allows the creation of rational numbers,
        addition, subtraction, multiplication, and division of rational numbers, and the printing of the numerator
        and denominator from the rational number as well as the rational number in the form a/b.
*/
#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
public:
    Rational(); // default constructor
    /*
        Allows a rational number to be created quickly
        @param a the numerator of a rational number
        @param b the denominator of a rational number
    */
    Rational(int a, int b);
    /*
        Adds two rational numbers (the one accessing this function and 'b')
        @param b the other rational number to be added to the original
        @return a variable of type Rational used to store the entire rational but keep numerator and denominator separate
    */
    Rational add(Rational b);
    /*
        Subtracts two rational numbers (the one accessing this function and 'b')
        @param b the other rational number to be subtracted from the original
        @return a variable of type Rational used to store the entire rational but keep numerator and denominator separate
    */
    Rational subtract(Rational b);
    /*
        Multiplies two rational numbers (the one accessing this function and 'b')
        @param b the other rational number to be multiplied with the original
        @return a variable of type Rational used to store the entire rational but keep numerator and denominator separate
    */
    Rational multiply(Rational b);
    /*
        Divides two rational numbers (the one accessing this function and 'b')
        @param b the other rational number to be divided by the original
        @return a variable of type Rational used to store the entire rational but keep numerator and denominator separate
    */
    Rational divide(Rational b);
    /*
        Allows the numerator to be taken from a rational number
        @return the numerator
    */
    int get_numerator();
    /*
        Allows the denominator to be taken from a rational number
        @return the denominator
    */
    int get_denominator();
    /*
        Allows printing of the variable in the form a/b where a is the numerator and b is the denominator
    */
    void print();
private:
    int m_numerator, m_denominator;
};

#endif
