//
//  Exercise12_03.cpp
//  CSCI2490
//
//  Created by Phil on 2/17/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
template<typename T>
int binarySearch(const T list[], T key, int listSize);

int main()
{
    int intArray[] =
    {
        1, 2, 3, 4, 8, 15, 23, 31, 45, 56, 67, 466, 656, 788, 899
    };
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a key: ";
        int key;
        cin >> key;
        cout << "binarySearch(intArray, key, 15) is "
        << binarySearch(intArray, key, 15) << endl;
    }
    
    
    double doubleArray[] =
    {
        0.1, 2.5, 3.6, 4.7, 8.8, 15.8, 23.4, 31.5, 45.6, 56.6, 67.5, 466.5, 656.7, 788.9, 899.9
    };
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a key: ";
        double key;
        cin >> key;
        cout << "binarySearch(doubleArray, key, 15) is "
        << binarySearch(doubleArray, key, 15) << endl;
    }
    
    string cities[] =
    {
        "Atlanta", "Augusta", "Macon", "Savannah"
    };
    
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter a city: ";
        string city;
        cin >> city;
        cout << "binarySearch(cities, city, 4) is " 
        << binarySearch(cities, city, 4) << endl;
    }
    
    return 0;
}

template<typename T>
int binarySearch(const T list[], T key, int listSize)
{
    int low = 0;
    int high = listSize - 1;
    
    while (high >= low)
    {
        int mid = (low + high) / 2;
        if (key < list[mid])
            high = mid - 1;
        else if (key == list[mid])
            return mid;
        else
            low = mid + 1;
    }
    
    return -low - 1;
}