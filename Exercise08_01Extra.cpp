//
//  Exercise08_01Extra.cpp
//  CSCI2490
//
//  Created by Phil on 1/27/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

unsigned a, b, c, d, e = 0;

int main()
{
    cout << fixed << setprecision(1);
    const int NUMBER_OF_STUDENTS = 8;
    const int NUMBER_OF_QUESTIONS = 10;
    
    
    // Students' answers to the questions
    char answers[NUMBER_OF_STUDENTS][NUMBER_OF_QUESTIONS] =
    {
        {'A', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'D', 'B', 'A', 'B', 'C', 'A', 'E', 'E', 'A', 'D'},
        {'E', 'D', 'D', 'A', 'C', 'B', 'E', 'E', 'A', 'D'},
        {'C', 'B', 'A', 'E', 'D', 'C', 'E', 'E', 'A', 'D'},
        {'A', 'B', 'D', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'B', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'B', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'},
        {'E', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}
    };
    
    // Key to the questions
    char keys[] = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'};
    
    // Grade all answers
    for (int i = 0; i < NUMBER_OF_QUESTIONS; i++)
    {
        
       
        
        for (int j = 0; j < NUMBER_OF_STUDENTS; j++)
        {
            if (answers[j][i] == 'A') {
                a++;
            }
            else if (answers[j][i] == 'B') {
                b++;
            }
            else if (answers[j][i] == 'C') {
                c++;
            }
            else if (answers[j][i] == 'D') {
                d++;
            }
            else {
                e++;
            }



                
        }
        //cout << fixed << setprecision(2);
        cout << "For question #" << i + 1 << endl;
        cout << "Percentage of As: " << (a / 8.0) * 100.0 << "%" << endl;
        cout << "Percentage of Bs: " << (b / 8.0) * 100.0 << "%" << endl;
        cout << "Percentage of Cs: " << (c / 8.0) * 100.0 << "%" << endl;
        cout << "Percentage of Ds: " << (d / 8.0) * 100.0 << "%" << endl;
        cout << "Percentage of Es: " << (e / 8.0) * 100.0 << "%" << endl;
        
        a = 0;
         b = 0;
         c = 0;
         d = 0;
         e = 0;
        
    }
    
    return 0;
}
