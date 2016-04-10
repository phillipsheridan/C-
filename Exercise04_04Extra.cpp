//
//  Exercise04_04Extra.cpp
//  CSCI2490
//
//  Created by Phil on 1/15/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdlib>
#define PI 3.14159
using namespace std;


double sind(double angle)
{
    
    return sin(angle * PI / 180.0f);
}
double cosd(double angle)
{
    
    return cos(angle * PI / 180.0f);
}

int main()
{
    const double G = 9.8;
    double coeff;
    double angle;
    
    cout << "Enter the coefficient of friction: ";
    cin >> coeff;
    cout << "Enter the angle: ";
    cin >> angle;
    
    double a = (G * sind(angle)) - (coeff * G * cosd(angle));
    if (a > 0) {
        cout << "The brick accelerates at " << a << " meters per square seconds";
    }
    else {
        cout << "The brick does not move or move at a constant speed";
    }
    return 0;
}
