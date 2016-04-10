//
//  TestBST.cpp
//  CSCI2490
//
//  Created by Phil on 4/8/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#include <stdio.h>

using namespace std;

int main() {
    
}
template <typename T>
public bool search(T& t) const {
    
    return search(t, root);
}
template <typename T>
public bool search(T& t, TreeNode<T>& current) const{
    if (current == nullptr) {
        return false;
    }
    else if (current->element > t) {
        search(t, current->left);
    }
    else if (current->element < t) {
        search(t, current->right);
    }
    else {
        return true;
    }
    
    

}
