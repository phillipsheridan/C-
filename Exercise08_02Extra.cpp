//
//  Exercise08_02Extra.cpp
//  CSCI2490
//
//  Created by Phil on 1/27/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
using namespace std;

const int NUMBER_OF_STUDENTS = 8;
const int NUMBER_OF_QUESTIONS = 10;
int counter[8][2];

void twoDSort(int array[8][2]) {
    
    int tempStudent, tempScore;
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (array[j][1] > array[i][1]) {
                tempScore = array[i][1];
                tempStudent = array[i][0];
                array[i][1] = array[j][1];
                array[i][0] = array[j][0];
                array[j][1] = tempScore;
                array[j][0] = tempStudent;
                
            }
        }
        
    }
    
    
    
    
}


int main()
{
    
    
    
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
    for (int i = 0; i < NUMBER_OF_STUDENTS; i++)
    {
        // Grade one student
        int correctCount = 0;
        for (int j = 0; j < NUMBER_OF_QUESTIONS; j++)
        {
            if (answers[i][j] == keys[j])
                correctCount++;
        }
        counter[i][0] = i;
        counter[i][1] = correctCount;
        //cout << "Student " << counter[i][0] << "'s correct count is " <<
        //counter[i][1] << endl;
    }
    twoDSort(counter);
    
    for (int i = 0; i < 8; i++) {
        cout << "Student " << counter[i][0] << ": " << counter[i][1] << endl;
    }
    

    
    return 0;
}
