//
//  Exercise13_05.cpp
//  CSCI2490
//
//  Created by Phil on 2/26/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>


using namespace std;

int main() {
    string gender;
    string name;
    string year;
    cout << "Enter year: " << endl;
    cin >> year;
    cout << "Enter gender: " << endl;
    cin >> gender;
    cout << "Enter name: " << endl;
    cin >> name;
    string fileName("/Users/phillip/Desktop/BabyNames/babynamesranking" + year + ".txt");
    ifstream input(fileName);
    if (input.fail()) {
        cout << "File not found." << endl;
        return 0;
    }
    
    string line;
    vector<string> v;
    for (int i = 0; i < 1000; i++) {
    getline(input, line);
    string temp;
    
    //cout << line << endl;
            if (line.find(name) != string::npos) {
            string result;
            stringstream ss(line);
            ss >> result;
                if (gender == "m" || "M") {
                    
                    ss >> temp;
                    if (temp == name) {
                        cout << name << " is ranked #" << result << " in year " << year << endl;
                        break;
                    }
                }
                if (gender == "f" || "F"){
                    for (int i = 0; i < 2; i++) {
                    ss >> temp;
                    }
                    if (temp == name) {
                    cout << name << " is ranked #" << result << " in year " << year << endl;
                    break;
                    }
                }
            
       }
        
        
        
        
    
        
    
}
    return 0;
}
