//
//  Exercise04_06Extra.cpp
//  CSCI2490
//
//  Created by Phil on 1/15/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string s;
    int result = 0;
    cout << "Enter a four digit string: ";
    cin >> s;
    unsigned j = 3;
    for (unsigned i = 0; i < 4; i++) {
        if (s.at(i) == '1') {
            result += pow(2, j);
        }
        j--;
    }
    cout << "The decimal number for " << s << " is " << result;
    return 0;
}