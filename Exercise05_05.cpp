//
//  Exercise05_05.cpp
//  CSCI2490
//
//  Created by Phil on 1/20/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << left;
    cout << setw(10) << "Kilograms\t" << setw(10) << "Pounds\t" << setw(5) << "|\t" << setw(10) << "Pounds\t";
    cout << setw(10) << "Kilograms\t" << endl << endl;
    
    unsigned i = 1, j = 20;
    while (i < 200) {
        cout << left;
        cout << setw(10) << i << "\t" << setw(10) << 2.2 * i  << setw(5) << "|\t" << setw(10) << j << "\t";
        cout << setw(10) << j / 2.2 << "\t" << endl;
        i+= 2;
        j+= 5;
    }
    
    return 0;
}
