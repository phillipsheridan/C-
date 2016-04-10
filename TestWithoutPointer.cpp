//
//  TestWithoutPointer.cpp
//  CSCI2490
//
//  Created by Phil on 2/9/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
using namespace std;
void copy(int s1[], int s2[], int size) {
    for (int i = 0; i < size; i++) {
        s1[i] = s2[i];
    }
}
void shift (int s1[], int size) {
    for (int i = 0; i < size - 1; i++) {
        s1[i] = s1[i+1];
    }
    
}

int main() {
    
    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {0, 0, 0, 0, 0};
    const int SIZE = 5;
    
    cout << "Before copy, a2 is: ";
    for (int i = 0; i < 5; i++) {
        cout << a2[i] << " ";
    }
    cout << endl;
    copy(a2, a1, SIZE);
    cout << "After copy, a2 is: ";
    for (int i = 0; i < 5; i++) {
        cout << a2[i] << " ";
    }
    cout << endl;
    cout << "Before shift, a1 is: ";
    for (int i = 0; i < 5; i++) {
        cout << a1[i] << " ";
    }
    cout << endl;
    shift (a1, SIZE);
    cout << "After shift, a1 is: ";
    for (int i = 0; i < 5; i++) {
        cout << a1[i] << " ";
    }
    cout << endl;

    

    
    return 0;
}
