//
//  Exercise04_05Extra.cpp
//  CSCI2490
//
//  Created by Phil on 1/15/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    
    cout << "The last character is " << s.at(s.length() - 1);
}