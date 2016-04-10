//
//  Exercise07_07.cpp
//  CSCI2490
//
//  Created by Phil on 1/25/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
`
int main() {
    
    unsigned array[100];
    unsigned count[10] = {0};
    
    for (unsigned i = 0; i < 100; i++) {
        array[i] = rand() % 10;
    }
    
    cout << "The numbers are: " << endl;
    
    for (unsigned i = 0; i < 100; i++) {
        cout << array[i] << " ";
    }

    
    for (unsigned i = 0; i < 10; i++) {
        for (unsigned j = 0; j < 100; j++) {
            if (array[j] == i) {
                count[i] += 1;
        }
        
        }
    }
    cout << "\nThe counts are: " << endl;
    for (unsigned i = 0; i < 10; i++) {
        cout << to_string(i) + ": " + to_string(count[i]) << endl;
        
    }
    
    
    
    
    return 0;
}
