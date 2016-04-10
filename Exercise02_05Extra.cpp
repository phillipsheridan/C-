//
//  Exercise02_05Extra.cpp
//  CSCI2490
//
//  Created by Phil on 1/13/16.
//  Copyright © 2016 Phil. All rights reserved.
//
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double accountValue;
    double annualInterestRate;
    double years;
    
    cout << "Enter the account value: " << endl;
    cin >> accountValue;
    
    cout << "Enter the annual interest rate: " << endl;
    cin >> annualInterestRate;
    
    annualInterestRate /= 100;
    
    cout << "Enter the number of years: " << endl;
    cin >> years;
    
    double monthlyInterestRate = annualInterestRate / 12;
    double months = years * 12;
    
    double initial = accountValue / pow((1 + monthlyInterestRate), months);
    
    cout << "Initial account value is " << initial;
    return 0;
}