#ifndef SBE201_WORDCOUNT_MAPS_BST_HPP
#define SBE201_WORDCOUNT_MAPS_BST_HPP

#include <iostream>
#include <string>

namespace hospital_data
{
    struct BSTNode
{
    std::string DeviceName;
    BSTNode* left;
    BSTNode* right;
};

using Tree = BSTNode *;

Tree create()
{
    return nullptr;
}

bool isEmpty( Tree device )
{
return device == nullptr;
}
void insert( Tree &device, std::string DeviceName)
{
if ( isEmpty( device))
        device = new BSTNode{ DeviceName , nullptr , nullptr };

    else
    {
        if ( DeviceName < device->DeviceName )
            insert( device->left, DeviceName );

        else insert( device->right, DeviceName );
    }
}
}

#endif 