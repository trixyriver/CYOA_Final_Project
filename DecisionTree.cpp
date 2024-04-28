#include "DecisionTree.h"
#include <iostream>

DecisionTree::~DecisionTree() {
    delete root;
}

void DecisionTree::traverseTree() const {
    DecisionTreeNode* currentNode = root;
    while (currentNode != nullptr) {
        // Display the decision text
        std::cout << currentNode->getText() << "\n";

        // Display the options
        const std::vector<DecisionTreeNode*>& children = currentNode->getChildren();
        for (size_t i = 0; i < children.size(); ++i) {
            std::cout << i + 1 << ". " << children[i]->getText() << "\n";
        }

        // Get user input and navigate to the corresponding child node
        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        if (choice < 1 || choice > static_cast<int>(children.size())) {
            std::cout << "Invalid choice. Please try again.\n";
        }
        else {
            currentNode = children[choice - 1];
        }
    }
}