//
//  Exercise02_06Extra.cpp
//  CSCI2490
//
//  Created by Phil on 1/13/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "Enter an integer: " << endl;
    
    string s;
    
    cin >> s;
    string result = "";
    
    
    for (int i = s.length() - 1; i >= 0; i--) {
        result = result + s.at(i);
    }
    
    cout << result << endl;
    
    
    
    return 0;   
}