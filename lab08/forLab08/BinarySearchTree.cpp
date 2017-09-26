//  Subsetted from:
//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** @file BinarySearchTree.cpp */
#include <iostream>

#include "BinarySearchTree.h"

// PRIVATE HELPER METHODS - IMPLEMENT THESE

template<typename ItemType, typename KeyType>
void BinarySearchTree<ItemType, KeyType>::destroyTree(BinaryNode<ItemType>* subTreePtr)
{
}

template<typename ItemType, typename KeyType>
BinaryNode<ItemType>* BinarySearchTree<ItemType,KeyType>::insertInorder(BinaryNode<ItemType>* subTreePtr,
                                                                BinaryNode<ItemType>* newNodePtr)
{
}

template<typename ItemType, typename KeyType>
BinaryNode<ItemType>* BinarySearchTree<ItemType, KeyType>::findNode(
				BinaryNode<ItemType>* subTreePtr, const KeyType& target) const
{
}


//////////////////////////////////////////////////////////////
//      PUBLIC METHODS BEGIN HERE
//////////////////////////////////////////////////////////////

template<typename ItemType, typename KeyType>
BinarySearchTree<ItemType, KeyType>::BinarySearchTree() : rootPtr(nullptr)
{ //rootPtr = nullptr;
}

/*template<typename ItemType, typename KeyType>
BinarySearchTree<ItemType, KeyType>::~BinarySearchTree()
{
   this->destroyTree(rootPtr); // Call inherited method
}  // end destructor
*/
template <typename ItemType, typename KeyType>
 bool BinarySearchTree<ItemType, KeyType>::isEmpty() const{
   if(rootPtr==nullptr){
     return(1);
   }
   else{
     return(0);
   }
 }
//////////////////////////////////////////////////////////////
//      Public BinaryTreeInterface Methods Section - IMPLEMENT THESE
//////////////////////////////////////////////////////////////

template<typename ItemType, typename KeyType>
bool BinarySearchTree<ItemType, KeyType>::add(const ItemType& newData)
{
  if (isEmpty()){
    rootPtr= new BinaryNode<ItemType>();
    rootPtr->setItem(newData);
    return(1);
  }else{
    BinaryNode<ItemType>* current=rootPtr;
    return (add2(newData,current));
  }
}

template <typename ItemType, typename KeyType>
 bool BinarySearchTree<ItemType, KeyType>::add2(ItemType& value, BinaryNode<ItemType>* current){
   if((current->getItem())==value){
     return(0);
   }
   else if((current->getItem())->getdexValue()>value->getdexValue()){
     if(current->getleft()==nullptr){
       BinaryNode<ItemType>* newnode=new BinaryNode<ItemType>();
       newnode->setItem(value);
       current->setLeftChildPtr(newnode);
       return(1);
     }
     else{
       return(add(value, current->getLeftChildPtr()));
     }
   }
     else{
       if(current->getRightChildPtr()==nullptr){
         BinaryNode<ItemType>* newnode=new BinaryNode<ItemType>();
         newnode->setItem(value);
         current->setRightChildPtr(newnode);
         return(1);
       }
       else{
         return(add(value, current->getRightChildPtr()));
       }
     }
   }


template<typename ItemType, typename KeyType>
ItemType BinarySearchTree<ItemType, KeyType>::getEntry(const KeyType& aKey) const throw(NotFoundException)
{
}

template<typename ItemType, typename KeyType>
bool BinarySearchTree<ItemType, KeyType>::contains(const KeyType& aKey) const
{
}

//////////////////////////////////////////////////////////////
//      Public Traversals Section - IMPLEMENT THESE
//////////////////////////////////////////////////////////////

template<typename ItemType, typename KeyType>
void BinarySearchTree<ItemType, KeyType>::inorderTraverse(void visit(ItemType&)) const
{
}
