//
//  Exercise10_17.cpp
//  CSCI2490
//
//  Created by Phil on 2/10/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
using namespace std;
class Location {
public:
    int row;
    int column;
    double maxValue;
    Location(double array[3][4]);
};

Location::Location(double array[3][4]) {
    maxValue = array[0][0];
    column = 0;
    row = 0;
    for (int i = 1; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (array[i][j] > maxValue) {
                maxValue = array[i][j];
                row = i;
                column = j;
                
            }
        }
    }
}

Location locateLargest(double array[3][4]) {
    
    Location l(array);
    return l;
}
int main()
{
    double a[3][4];
    cout << "Enter a 3 by 4 matrix: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }
    Location b = locateLargest(a);
    cout << "The location of the largest element is " << b.maxValue << " at (" << b.row << ", " << b.column << ")" << endl;
}