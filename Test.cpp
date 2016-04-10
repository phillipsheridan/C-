#include <iostream>
#include <vector>
#include <string>


using namespace std;
int main() {
    cout << "Enter five numbers: ";
    vector<int> v;
    int temp;
    for (int i = 0; i < 5; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    
    cout << "Before pop: ";
    for (int i = 0; i < 5; i++) {
        cout << to_string(v[i]) + " ";
    }
    
    v.pop_back();
    cout << "\nAfter pop: ";
    for (int i = 0; i < 4; i++) {
        cout << to_string(v[i]) + " ";
    }
    
    return 0;
}
