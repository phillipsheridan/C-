//
//  Exercise12_01.cpp
//  CSCI2490
//
//  Created by Phil on 2/17/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


template<typename T>
T maxValue(const T list[], const int size) {
    T max = list[0];
    for (int i = 1; i < size; i++) {
        if (list[i] > max) {
            max = list[i];
        }
    }
    return max;
}
int main()
{
    int intArray[] =
    {
        1, 2, 4, 2, 5, 3, 1
    };
    cout << "Maximum int value is " << maxValue(intArray, 7) << endl;
    
    double doubleArray[] =
    {
        1.4, 2, 0.4, 2, 0.5, 3, 1
    };
    cout << "Maximum double value is " << maxValue(doubleArray, 7) << endl;
    
    string strings[] =
    {
        "abc", "cbs", "nbc"
    };
    
    cout << "Maximum string is " << maxValue(strings, 3) << endl;
    
    return 0;
}