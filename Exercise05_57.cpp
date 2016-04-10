//
//  Exercise05_57.cpp
//  CSCI2490
//
//  Created by Phil on 1/21/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <string>
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Enter a password: " << endl;
    cin >> s;
    unsigned k = s.length();
    unsigned count = 0;
    bool check = 1;
    
    
    for (unsigned i = 0; i < k; i++) {
        if (!isalnum(s.at(i))) {
            check = 0;
        }
        if (isdigit(s.at(i))) {
            count++;
        }
    }
    
    if (k < 8 || count < 2 ) {
        check = 0;
        }
    
    if (check == 0) {
        cout << "invalid password" << endl;
    } else {
        cout << "valid password" << endl;
    }
    return 0;
    
}
