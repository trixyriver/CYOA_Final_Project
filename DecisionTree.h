#ifndef DECISION_TREE_H
#define DECISION_TREE_H

#include <vector>
#include <string>
#include "DecisionTreeNode.h"
#include "Player.h" // Assuming Player is used in traverseTree function

class DecisionTree {
private:
    DecisionTreeNode* root;
    std::vector<std::string> storyline;

public:
    DecisionTree(); // Constructor
    ~DecisionTree(); // Destructor

    const std::vector<std::string>& getStoryline() const; // Getter for storyline

    void traverseTree(Player& player) const; // Function to traverse the decision tree
};

#endif // DECISION_TREE_H


