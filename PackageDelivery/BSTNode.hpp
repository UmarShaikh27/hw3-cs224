#pragma once
#include "Truck.hpp"

class BSTNode
{
public:
    Truck val;
    BSTNode *left;
    BSTNode *right;

    BSTNode(Truck val, BSTNode *left, BSTNode *right) : val(val),
                                                        left(left),
                                                        right(right) {}
};