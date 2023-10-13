// #pragma once
#include <iostream>
#include <string>
#include "BinarySearchTree.hpp"
using namespace std;

BinarySearchTree::BinarySearchTree(){
    root->left = nullptr;
    root->right = nullptr;
    root = nullptr;
}

BinarySearchTree::~BinarySearchTree(){

}

void BinarySearchTree::insert(Truck newEntry){
    BSTNode* temp = root;
    BSTNode* targetNode = nullptr; 
    while(temp != nullptr){
        targetNode = temp;
        if(newEntry.regNo >= temp->val.regNo){
            temp  = temp->right;
        }else{
            temp = temp->left;
        }
    }
    BSTNode* newNode;
    newNode->left = nullptr;
    newNode->right = nullptr;
    newNode->val = newEntry;
    if(newEntry.regNo >= targetNode->val.regNo){
        targetNode->right = newNode;
    }
    else{
        targetNode->left = newNode;
    }
    
}

void BinarySearchTree::inOrderTraversal(double distance){
    static BSTNode* temp = root;
    while(temp->left != nullptr){
        makeJourney(temp->left,distance);
        temp = temp->left;
        inOrderTraversal(distance);
    }
    makeJourney(temp,distance);
    while(temp->right != nullptr){
        makeJourney(temp->right,distance);
        temp = temp->right;
        inOrderTraversal(distance);
    }
}

void BinarySearchTree::makeJourney(BSTNode* node, double distance){
    int fm = node->val.fullMileage , em = node->val.emptyMileage;
    double req  = fm/distance + em/distance;
    if(req > node->val.petrol){
        node->val.petrol-=req;
    }
}