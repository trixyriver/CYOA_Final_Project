#ifndef DECISIONTREENODE_H
#define DECISIONTREENODE_H

#include <string>
#include <vector>

class DecisionTreeNode {
private:
    std::string decisionText;
    std::vector<DecisionTreeNode*> children;

public:
    DecisionTreeNode(const std::string& text) : decisionText(text) {}
    ~DecisionTreeNode();

    void addChild(DecisionTreeNode* child);
    const std::string& getText() const;
    const std::vector<DecisionTreeNode*>& getChildren() const;
};

#endif // DECISIONTREENODE_H
