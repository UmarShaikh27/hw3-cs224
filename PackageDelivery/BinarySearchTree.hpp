#pragma once
#include <fstream>
#include "BSTNode.hpp"

class BinarySearchTree
{
public:
    // TODO: You have to define the functions below.
    BinarySearchTree();
    ~BinarySearchTree();

    // TODO: Design binary search tree that will be exposed to the user
    void insert(Truck val);
    void inOrderTraversal(double distance);
private:
    BSTNode *root;
    void makeJourney(BSTNode* node,double distance);
    // TODO: Design all the helper functions here that are not to be exposed to the use
};