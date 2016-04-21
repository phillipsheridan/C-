//
//  Exercise22_13.cpp
//  CSCI2490
//
//  Created by Phil on 4/15/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>
#include <fstream>

using namespace std;

int main() {
    map<string, int> map1;
    string fileName;
    cout << "Enter the file name: " << endl;
    cin >> fileName;
    ifstream input(fileName);
    if (input.fail()) {
        cout << "File not found." << endl;
        return 0;
    }
    string s;
    while (input >> s) {
        if (map1.count(s)) {
            map1.at(s)++;
        }
        else {
            map1.insert(map<string, int>::value_type(s, 1));
        }
    }
    
    map<string, int>:: iterator p;
    for (p = map1.begin(); p != map1.end(); p++) {
        cout << "number of occurences for " << p->first << " is " << p->second << endl;
    }
    
    return 0;
    
}
