//
//  Exercise05_15.cpp
//  CSCI2490
//
//  Created by Phil on 1/20/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    unsigned i = 0;
    while (i * i * i < 12000) {
        i++;
    }
    cout << i - 1 << endl;
}
