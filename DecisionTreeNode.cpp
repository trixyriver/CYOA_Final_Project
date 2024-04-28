#include "DecisionTreeNode.h"

DecisionTreeNode::~DecisionTreeNode() {
    for (DecisionTreeNode* child : children) {
        delete child;
    }
}

void DecisionTreeNode::addChild(DecisionTreeNode* child) {
    children.push_back(child);
}

const std::string& DecisionTreeNode::getText() const {
    return decisionText;
}

const std::vector<DecisionTreeNode*>& DecisionTreeNode::getChildren() const {
    return children;
}