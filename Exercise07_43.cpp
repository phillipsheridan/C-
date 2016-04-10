//
//  Exercise07_43.cpp
//  CSCI2490
//
//  Created by Phil on 1/25/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int i = 0;
void dec2Bin(int value, char binaryString[]) {
    if (value > 0) {
        //int bin = value % 2;
        
        binaryString[i++] = value % 2 + 48;
        value /= 2;
        
        dec2Bin(value, binaryString);
    }
}
int main()
{
    char decimal[256] = {0};
    int value;
    cout << "Enter a decimal value: " << endl;
    cin >> value;
    
    cout << decimal << " is ";
    
    if (value == 0) {
        cout << "0";
        return 0;
    }
    
    dec2Bin(value, decimal);
    
    
    
    for (; i >=0; i--) {
        cout << decimal[i];
    }
    
   
    
    return 0;
    
}
