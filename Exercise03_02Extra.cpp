//
//  Exercise03_02Extra.cpp
//  CSCI2490
//
//  Created by Phil on 1/15/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1;
    double y1;
    double x2;
    double y2;
    
    cout << "Enter the coordinates for two points: ";
    cin >> x1 >> y1 >> x2 >> y2;
    double m = (y2 - y1) / (x2 - x1);
    double b = y1 - m * x1;
    
    if (m == 1 && b == 0) {
        cout << "The line equation for two points (" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << ") is y = x"
        << endl;
        
    } else if (m == 1 && b != 0) {
        cout << "The line equation for two points (" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << ") is y = x";
        
        if (b > 0) {
            cout << " + " << b;
        }
        else {
            cout << " - " << abs(b);
        }
    }
    else if (m != 1) {
        cout << "The line equation for two points (" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << ") is y = "<< m << "x";
        if (b == 0){
            cout << endl;
        }
        else if (b > 0) {
            cout << " + " << b;
        }
        else {
            cout << " - " << abs(b);
        }
    }
    
    return 0;
}