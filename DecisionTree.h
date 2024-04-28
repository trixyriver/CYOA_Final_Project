#ifndef DECISIONTREE_H
#define DECISIONTREE_H

#include "DecisionTreeNode.h"

class DecisionTree {
private:
    DecisionTreeNode* root;

public:
    DecisionTree(DecisionTreeNode* rootNode) : root(rootNode) {}
    ~DecisionTree();

    void traverseTree() const;
};

#endif // DECISIONTREE_H
