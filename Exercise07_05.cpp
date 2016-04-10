//
//  Exercise07_05.cpp
//  CSCI2490
//
//  Created by Phil on 1/25/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    cout << "Enter 10 numbers" << endl;
    double array[10];
    for (unsigned i = 0; i < 10; i++) {
        cin >> array[i];
    }
    double newArray[10] = {0};
    unsigned count = 0;
    
    for(unsigned i = 0; i < 10; i++) {
        double temp = array[i];
        bool contains = 0;
        for(unsigned j = 0; j < 10; j++) {
            if (newArray[j] == temp) {
                contains = 1;
            }
            if (contains == 1) break;
        }
        if (contains == 0) {
            newArray[i] = temp;
            count++;
        }
    }
    
    cout << "The distinct numbers are: ";
    for (unsigned i = 0; i < count; i++) {
        cout << newArray[i] << " ";
    }
    cout << endl;
    
    
    
    
    return 0;
}
