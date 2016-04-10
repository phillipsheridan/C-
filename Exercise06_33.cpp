//
//  Exercise06_33.cpp
//  CSCI2490
//
//  Created by Phil on 1/22/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
using namespace std;


void solveEquation(double a, double b, double c, double d, double e, double f, double& x, double& y, bool& isSolvable) {
    if (a * d - b * c == 0) {
        isSolvable = 0;
    }
    else {
        x = (e * d - b * f) / (a * d - b * c);
        y = (a * f - e * c) / (a * d - b * c);
    }
    
}


int main() {
    double a, b, c, d, e, f, x = 0, y = 0;
    bool isSolvable = 1;
    
    cout << "Enter a, b, c, d, e, f: " << endl;
    cin >> a >> b >> c >> d >> e >> f;
    
    solveEquation(a, b, c, d, e, f, x, y, isSolvable);
    
    if (isSolvable == 0) {
        cout << "The equation has no solution";
    }
    else {
        cout << "x is " << x << endl << "y is "  << y << endl;
    }
    return 0;
    
}

