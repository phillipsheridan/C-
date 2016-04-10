//
//  Exercise10_07.cpp
//  CSCI2490
//
//  Created by Phil on 2/8/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

void count(const string& s, int counts[], int size) {
    for (int i = 0; i < size; i++) {
        char c = tolower(s[i]);
        if (isalpha(c)) {
            counts[static_cast<int>(c) - 97]++;
        }
    }
}
int main() {
    const int SIZE = 26;
    int array[SIZE] = {0};
    string s;
    cout << "Enter a string: " << endl;
    getline(cin, s);
    count(s, array, SIZE);
    
    for (int i = 0; i < SIZE; i++) {
        if (array[i] != 0) {
        cout << static_cast<char>(i + 97) << ": " << array[i] << " times"<< endl;
        }
    }
    
    
    
    
    
    
    return 0;
}
