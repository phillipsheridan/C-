//
//  Exercise14_011.cpp
//  CSCI2490
//
//  Created by Phil on 3/9/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    int a, b, c, htop, hbot, ktop, kbot;
    cout << "Enter a, b, c: " << endl;
    cin >> a >> b >> c;
    htop = -b;
    hbot = 2 * a;
    ktop = 4 * a * c - b * b;
    kbot = 4 * a;
    cout << "h is " << htop << "/" << hbot << " k is " << ktop << "/" << kbot << endl;
    
    return 0;
}
