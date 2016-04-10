//
//  Exercise06_39.cpp
//  CSCI2490
//
//  Created by Phil on 1/22/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;



int bin2Dec(const string& binaryString) {
    int result = 0;
    int position = 0;
    int k = binaryString.length() - 1;
    for (int i = k; i >= 0; i--) {
        if (binaryString.at(i) == '1') {
            result += pow(2, position);
        }
        position++;
        
    }
    return result;
    
    
}
int main() {
    string s;
    cout << "Enter a binary string: " << endl;
    cin >> s;
    
    cout << "The decimal equivalent value is: " << bin2Dec(s) << endl;
    return 0;
}

