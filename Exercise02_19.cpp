//
//  Exercise02_19.cpp
//  CSCI2490
//
//  Created by Phil on 1/11/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    cout << "Enter three points for a triangle: " << endl;
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
    double side1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double side2 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    double side3 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    
    double s = (side1 + side2 + side3) / 2;
    double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    
    cout << "The area of the triangle is : " << area << endl;
    
    
    return 0;
}


