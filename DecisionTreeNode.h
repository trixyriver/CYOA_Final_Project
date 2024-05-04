// DecisionTreeNode.h

#ifndef DECISION_TREE_NODE_H
#define DECISION_TREE_NODE_H

#include <string>
#include <vector>

class DecisionTreeNode {
private:
    std::string text;
    std::string storyline;
    bool isChapter;
    bool finalEndingLeaf;
    std::vector<DecisionTreeNode*> children;
    DecisionTreeNode* parent;

public:
    DecisionTreeNode(const std::string& text, bool isChapter = false, bool finalEndingLeaf = false, const std::string& storyline = " ");
    ~DecisionTreeNode();

    const std::string& getText() const;
    const std::string& getStoryline() const;
    void addChild(DecisionTreeNode* child);
    const std::vector<DecisionTreeNode*>& getChildren() const;
    bool isChapterNode() const;
    bool isLeaf() const;
    bool isFinalEnding() const;
    DecisionTreeNode* getNextChapter() const;

    void setParent(DecisionTreeNode* parent);
};

#endif // DECISION_TREE_NODE_H
