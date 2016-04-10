//
//  Exercise21_10.cpp
//  CSCI2490
//
//  Created by Phil on 4/9/16.
//  Copyright © 2016 Phil. All rights reserved.
//

#ifndef BST_H
#define BST_H
#include <vector>
#include <iostream>
#include <stdexcept>
using namespace std;
template<typename T>
class TreeNode
{ public:
    T element; // Element contained in the node
    TreeNode<T>* left; // Pointer to the left child
    TreeNode<T>* right; // Pointer to the right child
    TreeNode(T element) // Constructor
    {
        this->element = element;
        left = nullptr;
        right = nullptr;
    } };
template<typename T>
class Iterator : public std::iterator<std::forward_iterator_tag, T>
{ public:
    
    
    Iterator(TreeNode<T>* p)
    {
        if (p == nullptr)
            current = -1; // The end
        else {
            // Get all the elements in inorder
            treeToVector(p);
            current = 0;
        } }
    Iterator operator++()
    {
        current++;
        if (current == v.size())
            current = -1; // The end
        return *this;
    }
    T& operator*()
    {
        return v[current];
    }
    bool operator==(const Iterator<T>& iterator) const
    {
        return current == iterator.current;
    }
    bool operator!=(const Iterator<T>& iterator) const
    {
        return current != iterator.current;
    }
private:
    int current;
    vector<T> v;
    void treeToVector(TreeNode<T>* p)
    {
        if (p != nullptr)
        {
            treeToVector(p->left);
            v.push_back(p->element);
            treeToVector(p->right);
        } }
};
template<typename T>
class BST
{ public:
    BST();
    BST(T elements[], int arraySize); BST(const BST<T>& tree);
    virtual ~BST();
    bool search(T element) const;
    virtual bool insert(T element);
    virtual bool remove(T element);
    void inorder() const;
    void preorder() const;
    void postorder() const;
    int getSize() const;
    int findHeight(TreeNode<T>* node) const;
    void clear();
    bool isFullBinaryTree() const;
    vector<TreeNode<T>*>* path(T element) const;
    Iterator<T> begin() const
    {
        return Iterator<T>(root);
    };
    Iterator<T> end() const
    
    {
        return Iterator<T>(nullptr);
    };
protected:
    TreeNode<T>* root;
    int size;
    virtual TreeNode<T>* createNewNode(T element);
private:
    void inorder(const TreeNode<T>* root) const; void postorder(const TreeNode<T>* root) const; void preorder(const TreeNode<T>* root) const; void copy(const TreeNode<T>* root);
    void clear(const TreeNode<T>* root);
};
template<typename T>
BST<T>::BST()
{
    root = nullptr;
    size = 0;
}
template<typename T>
BST<T>::BST(T elements[], int arraySize)
{
    root = nullptr;
    size = 0;
    for (int i = 0; i < arraySize; i++)
    {
        insert(elements[i]);
    }
}
// Copy constructor
template<typename T>
BST<T>::BST(const BST<T>& tree)
{
    root = nullptr;
    size = 0;
    copy(tree.root); // Recursively copy nodes to this tree
}
// Copies the element from the specified tree to this tree
template<typename T>
void BST<T>::copy(const TreeNode<T>* root)
{
    if (root != nullptr)
    {
        insert(root->element);
        copy(root->left);
        copy(root->right);
    } }
// Destructor
template<typename T>
BST<T>::~BST()
{
    clear(); }
// Return true if the element is in the tree
template<typename T>
bool BST<T>::search(T element) const
{
    TreeNode<T>* current = root; // Start from the root
    while (current != nullptr)
        
        if (element < current->element)
        {
            current = current->left; // Go left
        }
        else if (element > current->element)
        {
            current = current->right; // Go right
        }
        else // Element matches current->element
            return true; // Element is found
    return false; // Element is not in the tree
}
template<typename T>
TreeNode<T>*  BST<T>::createNewNode(T element)
{
    return new TreeNode<T>(element);
}
// Insert element into the binary search tree
// Return true if the element is inserted successfully
// Return false if the element is already in the list
template<typename T>
bool BST<T>::insert(T element)
{
    if (root == nullptr)
        root = createNewNode(element); // Create a new root
    else {
        // Locate the parent node
        TreeNode<T>* parent = nullptr;
        TreeNode<T>* current = root;
        while (current != nullptr)
            if (element < current->element)
            {
                parent = current;
                current = current->left;
            }
            else if (element > current->element)
            {
                parent = current;
                current = current->right;
            }
            else
                return false; // Duplicate node not inserted
        // Create the new node and attach it to the parent node
        if (element < parent->element)
            parent->left = createNewNode(element);
        else
            parent->right = createNewNode(element);
    }
    size++;
    return true; // Element inserted
}
// Inorder traversal
template<typename T>
void BST<T>::inorder() const
{
    inorder(root);
}
// Inorder traversal from a subtree
template<typename T>
void BST<T>::inorder(const TreeNode<T>* root) const {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->element << " ";
    inorder(root->right);
    
}
// Postorder traversal
template<typename T>
void BST<T>::postorder() const
{
    postorder(root);
}
// Inorder traversal from a subtree
template<typename T>
void BST<T>::postorder(const TreeNode<T>* root) const {
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->element << " ";
}
// Preorder traversal
template<typename T>
void BST<T>::preorder() const
{
    preorder(root);
}
// Preorder traversal from a subtree
template<typename T>
void BST<T>::preorder(const TreeNode<T>* root) const {
    if (root == nullptr) return;
    cout << root->element << " ";
    preorder(root->left);
    preorder(root->right);
}
// Get the number of nodes in the tree
template<typename T>
int BST<T>::getSize() const
{
    return size;
}
// Remove all nodes from the tree
template<typename T>
void BST<T>::clear()
{
    // Left as exercise
}
// Return a path from the root leading to the specified element
template<typename T>
vector<TreeNode<T>*>* BST<T>::path(T element) const
{
    vector<TreeNode<T>* >* v = new vector<TreeNode<T>* >();
    TreeNode<T>* current = root;
    while (current != nullptr)
    {
        v->push_back(current);
        if (element < current->element)
            current = current->left;
        else if (element > current->element)
            current = current->right;
        else
            break; }
    return v; }
// Delete an element from the binary search tree.

// Return true if the element is deleted successfully
// Return false if the element is not in the tree
template<typename T>
bool BST<T>::remove(T element)
{
    // Locate the node to be deleted and also locate its parent node
    TreeNode<T>* parent = nullptr;
    TreeNode<T>* current = root;
    while (current != nullptr)
    {
        if (element < current->element)
        {
            parent = current;
            current = current->left;
        }
        else if (element > current->element)
        {
            parent = current;
            current = current->right;
        }
        else
            break; // Element is in the tree pointed by current
    }
    if (current == nullptr)
        return false; // Element is not in the tree
    // Case 1: current has no left children
    if (current->left == nullptr)
    {
        // Connect the parent with the right child of the current node
        if (parent == nullptr)
        {
            root = current->right;
        }
        else {
            if (element < parent->element)
                parent->left = current->right;
            else
                parent->right = current->right;
        }
        delete current; // Delete current
    }
    else {
        // Case 2: The current node has a left child
        // Locate the rightmost node in the left subtree of
        // the current node and also its parent
        TreeNode<T>* parentOfRightMost = current;
        TreeNode<T>* rightMost = current->left;
        while (rightMost->right != nullptr)
        {
            parentOfRightMost = rightMost;
            rightMost = rightMost->right; // Keep going to the right
        }
        // Replace the element in current by the element in rightMost
        current->element = rightMost->element;
        // Eliminate rightmost node
        if (parentOfRightMost->right == rightMost)
            parentOfRightMost->right = rightMost->left;
        else
            // Special case: parentOfRightMost->right == current
            parentOfRightMost->left = rightMost->left;
        delete rightMost; // Delete rightMost
    }
    size--;
    
   
    return true; // Element inserted
}
template <typename T>
int BST<T>::findHeight(TreeNode<T>* node) const {
    if (node == nullptr)
        return -1;
    int l = findHeight(node->left);
    int r = findHeight(node->right);
    return 1 + max(l, r);
}

template <typename T>
bool BST<T>::isFullBinaryTree() const {
    if (getSize() == (1 << findHeight(root)) - 1) {
        return true;
    }
        return false;
}
#endif

int main()
{
    BST<int>  tree1;
    cout << "How many integers in the input? ";
    int size;
    cin >> size;
    
    cout << "Enter " << size << " integers: ";
    int temp;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        tree1.insert(temp);
    }
    
    cout << "Inorder (sorted): ";
    tree1.inorder();
    
    cout << "\nPostorder: ";
    tree1.postorder();
    
    cout << "\nPreorder: ";
    tree1.preorder();
    
    cout << "\nThe number of nodes is " << tree1.getSize();
    
    cout << "\ntree1 is full binary tree? " <<
    (tree1.isFullBinaryTree() ? "true" : "false") << endl;
    
    return 0;
}
