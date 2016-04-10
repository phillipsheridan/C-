//
//  Exercise06_35.cpp
//  CSCI2490
//
//  Created by Phil on 1/22/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
using namespace std;

// Prototype Function
void intersectPoint(double x1, double y1, double x2, double y2, double x3,
                    double y3, double x4, double y4, double& x, double& y, bool& isIntersecting);

int main() {
    
    double x = 0;
    double x1 = 0;
    double x2 = 0;
    double x3 = 0;
    double x4 = 0;
    double y = 0;
    double y1 = 0;
    double y2 = 0;
    double y3 = 0;
    double y4 = 0;
    bool isIntersecting = true;
    
    cout << "Please enter endpoints of the first line segment : "
    << endl;
    
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    
    cout << "Please enter endpoints of the second line segment: " << endl;
    
    cin >> x3;
    cin >> y3;
    cin >> x4;
    cin >> y4;
    
    intersectPoint(x1, y1, x2, y2, x3, y3, x4, y4, x, y, isIntersecting);
    
    if (isIntersecting > 0) {
        cout << "The intersecting point is : " << x << " , " << y << endl;
    } else {
        cout << "The two lines do not cross." << endl;
    }
    return 0;
}

void intersectPoint(double x1, double y1, double x2, double y2, double x3,
                    double y3, double x4, double y4, double& x, double& y, bool& isIntersecting) {
    
    double slope1 = ((y2 - y1) / (x2 - x1));
    double slope2 = ((y4 - y3) / (x4 - x3));
    double yint1 = 0;
    double yint2 = 0;
    
    yint1 = -(slope1 * x1) + y1;
    yint2 = -(slope2 * x3) + y3;
    
    if (slope1 == slope2) {
        isIntersecting = false;
    } else {
        
        x = (yint2 - yint1) / (slope1 - slope2);
        y = slope1 * x + yint1;
        
        isIntersecting = true;
    }
}
