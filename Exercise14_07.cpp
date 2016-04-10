//
//  Exercise14_07.cpp
//  CSCI2490
//
//  Created by Phil on 3/3/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>


using namespace std;

// Define and implement the Complex class here

class Complex {
public:
    string toString();
    Complex();
    Complex(double a, double b);
    Complex(double a);
    double getRealPart() const;
    double getImaginaryPart() const;
    Complex add(const Complex& c) const;
    Complex subtract(const Complex& c) const;
    Complex multiply(const Complex& c) const;
    Complex divide(const Complex& c) const;
    double abs() const;
    friend ostream& operator<<(ostream& out, const Complex& complex);
    friend istream& operator>>(istream& in, Complex& complex);
    
    Complex& operator+=(const Complex& c);
    Complex& operator-=(const Complex& c);
    Complex& operator*=(const Complex& c);
    Complex& operator/=(const Complex& c);
    
    double& operator[](int index);
    
    Complex& operator++();
    Complex& operator--();
    
    Complex operator+();
    Complex operator-();
    
    Complex operator++(int dummy);
    Complex operator--(int dummy);


private:
    double a;
    double b;
    
};

string Complex::toString() {
    return to_string(this->a)+ " " + to_string(this->b) + "i";
}
Complex::Complex() {
    this->a = 0;
    this->b = 0;
}
Complex::Complex(double a) {
    this->a = a;
    this->b = 0;
}
Complex::Complex(double a, double b) {
    this->a = a;
    this->b = b;
}
double Complex::getRealPart() const {
    return this->a;
}
double Complex::getImaginaryPart() const{
    return this->b;
}
Complex Complex::add(const Complex& c) const {
    Complex s(this->a + c.a, this->b + c.b);
    return s;
}
Complex Complex::subtract(const Complex& c) const{
    Complex s(this->a - c.a, this->b - c.b);
    return s;
}
Complex Complex::multiply(const Complex& c) const{
    Complex s(this->a * c.a - this->b * c.b, this->b * c.a + this->a * c.b);
    return s;
}
Complex Complex::divide(const Complex& c) const {
    Complex s((this->a * c.a + this->b * c.b) / (c.a * c.a + c.b * c.b), (this->b * c.a - this->a * c.b) / (c.a * c.a + c.b * c.b));
    return s;
}
double Complex::abs() const {
    return pow(this->a * this->a + this->b * this->b, 1/2);
}
Complex operator+(const Complex& c1, const Complex& c2) {
    return c1.add(c2);
}

Complex operator-(const Complex& c1, const Complex& c2) {
    return c1.subtract(c2);
}
Complex operator*(const Complex& c1, const Complex& c2) {
    return c1.multiply(c2);
}
Complex operator/(const Complex& c1, const Complex& c2) {
    return c1.divide(c2);
}
ostream& operator<<(ostream& out, const Complex& complex) {
    out << complex.a << " + " << complex.b << "i";
    return out;
}
istream& operator>>(istream& in, Complex& complex) {
    cout << "Enter a: ";
    in >> complex.a;
    cout << "Enter b: ";
    in >> complex.b;
    return in;
}
Complex& Complex::operator+=(const Complex& c) {
    *this = add(c);
    return *this;
}
Complex& Complex::operator-=(const Complex& c) {
    *this = subtract(c);
    return *this;
}
Complex& Complex::operator*=(const Complex& c) {
    *this = multiply(c);
    return *this;
}
Complex& Complex::operator/=(const Complex& c) {
    *this = divide(c);
    return *this;
}
double& Complex::operator[](int index) {
    if (index == 0) {
        return this->a;
    } else {
        return this->b;
    }
}
Complex& Complex::operator++() {
    this->a--;
    return *this;
}
Complex& Complex::operator--() {
    this->a++;
    return *this;
    
}
Complex Complex::operator++(int dummy) {
    Complex temp(a,b);
    this->a--;
    return temp;
}
Complex Complex::operator--(int dummy) {
    Complex temp(a,b);
    this->a++;
    return temp;
    
}

Complex Complex::operator+() {
    return *this;
}
Complex Complex::operator-() {
    return Complex(-a, b);
}

int main()
{
    Complex number1;
    cout << "Enter the first complex number: ";
    cin >> number1;
    
    Complex number2;
    cout << "Enter the second complex number: ";
    cin >> number2;
    
    cout << "(" << number1 << ")" << " + " << "(" << number2
    << ") = " << (number1 + number2) << endl;
    cout << "(" << number1 << ")" << " - " << "(" << number2
    << ") = " << (number1 - number2) << endl;
    cout << "(" << number1 << ")" << " * " << "(" << number2
    << ") = " << (number1 * number2) << endl;
    cout << "(" << number1 << ")" << " / " << "(" << number2
    << ") = " << (number1 / number2) << endl;
    cout << "|" << number1 << "|" << " = " << number1.abs() << endl;
    
    number1[0] = 3.4;
    cout << number1++ << endl;
    cout << ++number2 << endl;
    cout << (3 + number2) << endl;
    cout << (number2 += number1) << endl;
    cout << (number2 *= number1) << endl;
    
    return 0;
}



























