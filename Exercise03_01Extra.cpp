//
//  Exercise03_01Extra.cpp
//  CSCI2490
//
//  Created by Phil on 1/15/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int num;
    int den;
    
    cout << "Enter a numerator: " << endl;
    cin >> num;
    cout << "Enter a denominator: " << endl;
    cin >> den;
    
    if (num > den) {
        if (num % den == 0) {
            cout << num << " / " << den << " is an improper fraction and can be reduced to " << num / den << endl;
        }
        else {
            cout << num << " / " << den << " is an improper fraction and can be reduced to " << num / den << " + "
            << num % den << " / " << den << endl;
        }
    }
    else if (num == den) {
        cout << num << " / " << den << " is an improper fraction and can be reduced to " << 1 << endl;
    }
    else {
        cout << num << " / " << den << " is a proper fraction";
    }
    
    
    
    return 0;
}