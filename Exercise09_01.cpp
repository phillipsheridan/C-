//
//  Exercise09_01.cpp
//  CSCI2490
//
//  Created by Phil on 2/3/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
using namespace std;

class Rectangle {
public:
    double width;
    double height;
    
    Rectangle() {
        width = 1;
        height = 1;
    }
    Rectangle(double width, double height) {
        this->width = width;
        this->height = height;
    }
    
    double getHeight() {
        return this->height;
    }
    double getWidth() {
        return this->width;
    }
    void setHeight(double height) {
        this->height = height;
        
    }
    void setWidth(double width) {
        this->width = width;
    }
    double getArea() {
        return this->width * this->height;
    }
    double getPerimeter() {
        return 2 * this->width + 2 * this->height;
    }
};




int main() {
    
    Rectangle rectangle1(4, 40);
    Rectangle rectangle2(3.5, 35.9);
    cout << "The height of rectangle1 is " << rectangle1.height << " and the width of rectangle1 is " << rectangle1.width << endl;
    cout << "The area of rectangle1 is " << rectangle1.getArea() << " and its perimeter is " << rectangle1.getPerimeter() << endl;
    cout << "The height of rectangle2 is " << rectangle2.height << " and the width of rectangle2 is " << rectangle2.width << endl;
    cout << "The area of rectangle2 is " << rectangle2.getArea() << " and its perimeter is " << rectangle2.getPerimeter() << endl;
    
}
