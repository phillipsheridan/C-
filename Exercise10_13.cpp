//
//  Exercise10_13.cpp
//  CSCI2490
//
//  Created by Phil on 2/8/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <cmath>
#define PI 3.14159
using namespace std;

class RegularPolygon {
public:
    RegularPolygon();
    RegularPolygon(int n, double side);
    RegularPolygon(int n, double side, double x, double y);
    int getN() const;
    double getSide() const;
    double getX() const;
    double getY() const;
    double getPerimeter() const;
    double getArea() const;
private:
    int n;
    double side;
    double x;
    double y;
    
};

RegularPolygon::RegularPolygon() {
    n = 3;
    side = 1;
    x = 0;
    y = 0;
}
RegularPolygon::RegularPolygon(int n, double side) {
    this->n = n;
    this->side = side;
    x = 0;
    y = 0;
}
RegularPolygon::RegularPolygon(int n, double side, double x, double y) {
    this->n = n;
    this->side = side;
    this->x = x;
    y = 0;
}
double RegularPolygon::getSide() const{
    return side;
}
int RegularPolygon::getN() const {
    return n;
}
double RegularPolygon::getX() const {
    return x;
}
double RegularPolygon::getY() const {
    return y;
}
double RegularPolygon::getPerimeter() const {
    return side * n;
}
double RegularPolygon::getArea() const {
    return (this->getN() * this->getSide() * this->getSide()) / (4 * tan(PI/ this->getN()));
}

int main() {
    RegularPolygon polygon1;
    RegularPolygon polygon2(6, 4);
    RegularPolygon polygon3(10, 4, 5.6, 7.8);
    
    
    cout << polygon1.getPerimeter() << " " << polygon1.getArea() << endl;
    cout << polygon2.getPerimeter() << " " << polygon2.getArea() << endl;
    cout << polygon3.getPerimeter() << " " << polygon3.getArea() << endl;
    return 0;
}
