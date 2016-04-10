//
//  TestWithPointer.cpp
//  CSCI2490
//
//  Created by Phil on 2/9/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
using namespace std;

void copy(int* p1, int* p2, int n) {
    for (int i = 0; i < n; i++) {
        *(p1 + i) = *(p2 + i);
    }
}
void shift(int* a, int n) {
    for (int i = 0; i < n - 1; i++) {
        *(a + i) = *(a + i + 1);
    }
}

int main() {
    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {0, 0, 0, 0, 0};
    const int SIZE = 5;
    int* p1;
    p1 = a1;
    int* p2;
    p2 = a2;
    
    
    cout << "Before copy, p2 is: ";
    for (int i = 0; i < 5; i++) {
        cout << *(p2 + i) << " ";
    }
    cout << endl;
    copy(p2, p1, SIZE);
    cout << "After copy, p1 is: ";
    for (int i = 0; i < 5; i++) {
        cout << *(p1 + i) << " ";
    }
    cout << endl;
    cout << "Before shift, p1 is: ";
    for (int i = 0; i < 5; i++) {
        cout << *(p1 + i) << " ";
    }
    cout << endl;
    shift (p1, SIZE);
    cout << "After shift, p1 is: ";
    for (int i = 0; i < 5; i++) {
        cout << *(p1 + i) << " ";
    }
    cout << endl;

    
    return 0;
}
