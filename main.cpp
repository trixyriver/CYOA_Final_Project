#include <iostream>
//#include "Chapter1.h"
//#include "Chapter2.h"
//#include "Chapter3.h"
//#include "Chapter4.h"
//#include "Chapter5.h"
#include "Player.h"
#include "DecisionTree.h"
#include <string>

using namespace std;

int main() {
    // Ask for the player's name
    string playerName;
    cout << "Welcome to the Choose Your Own Adventure game!\n";
    cout << "Please enter your name: ";
    cin >> playerName;

    // Create a player object and set the name
    Player player;
    player.setName(playerName);

    // Create a decision tree
    DecisionTree decisionTree;

    // Introduction
    cout << "Welcome, " << player.getName() << ", to the magical world of the Arcane Academy!\n";

    // Start the CYOA
    decisionTree.traverseTree(player); // Pass the DecisionTree object to the traverseTree function

    // Game over
    cout << "\nThanks for playing!\n";

    //free up memory from decision tree
    decisionTree.~DecisionTree();

    return 0;
}
