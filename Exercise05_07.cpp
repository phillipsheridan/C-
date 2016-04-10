//
//  Exercise05_07.cpp
//  CSCI2490
//
//  Created by Phil on 1/20/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.14195
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
    cout << fixed << setprecision(4);
    cout << left;
    cout << setw(10) << "Degree\t" << setw(10) << "Sin\t\t" << setw(5) << "Cos\t\t" <<  endl << endl;
    
    unsigned i = 0;
    while (i <= 360) {
        cout << left;
        cout << setw(10) << i << "\t" << setw(10) << sind(i)  << "\t" << setw(5) << cosd(i) << endl;
        i+= 10;
        
    }
    
    return 0;
}
