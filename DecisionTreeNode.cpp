// DecisionTreeNode.cpp

#include "DecisionTreeNode.h"

DecisionTreeNode::DecisionTreeNode(const std::string& text, bool isChapter, bool finalEndingLeaf, const std::string& storyline)
    : text(text), isChapter(isChapter), finalEndingLeaf(finalEndingLeaf), parent(NULL), storyline(storyline) {}

DecisionTreeNode::~DecisionTreeNode() {
    for (std::vector<DecisionTreeNode*>::iterator it = children.begin(); it != children.end(); ++it) {
        delete *it;
    }
}

const std::string& DecisionTreeNode::getText() const {
    return text;
}

const std::string& DecisionTreeNode::getStoryline() const {
    return storyline; 
}

void DecisionTreeNode::addChild(DecisionTreeNode* child) {
    children.push_back(child);
    child->setParent(this);
}

const std::vector<DecisionTreeNode*>& DecisionTreeNode::getChildren() const {
    return children;
}

bool DecisionTreeNode::isChapterNode() const {
    return isChapter;
}

bool DecisionTreeNode::isLeaf() const {
    return children.empty();
}

bool DecisionTreeNode::isFinalEnding() const {
    return finalEndingLeaf;
}

DecisionTreeNode* DecisionTreeNode::getNextChapter() const {
    DecisionTreeNode* current = parent;
    while (current != NULL && !current->isChapterNode()) {
        current = current->parent;
    }
    return current;
}

void DecisionTreeNode::setParent(DecisionTreeNode* parent) {
    this->parent = parent;
}
