#include <iostream>
#include "Player.h"
#include "Chapter1.h" // Include headers for each chapter
#include "Chapter2.h"
#include "Chapter3.h"
#include "Chapter4.h"
#include "Chapter5.h"
#include "DecisionTreeNode.h"
#include "DecisionTree.h"

#include <SFML/Graphics.hpp>
#include <iostream>
#include "DecisionTree.h"

// Function to draw text on the SFML window
void drawText(sf::RenderWindow& window, const std::string& text) {
    sf::Font font;
    if (!font.loadFromFile("arial.ttf")) {
        std::cerr << "Failed to load font file\n";
        return;
    }

    sf::Text sfText(text, font, 24);
    sfText.setFillColor(sf::Color::White);
    sfText.setPosition(10.f, 10.f);

    window.draw(sfText);
}

int main() {
    // Define decision tree nodes for each chapter
    DecisionTreeNode* startNode = new DecisionTreeNode("Start");

    // Chapter 1: The Arcane Academy
    DecisionTreeNode* chapter1Node = new DecisionTreeNode("Chapter 1: The Arcane Academy");
    startNode->addChild(chapter1Node);

    // Attend your first day of classes
    DecisionTreeNode* attendClassesNode = new DecisionTreeNode("Attend your first day of classes");
    chapter1Node->addChild(attendClassesNode);
    DecisionTreeNode* participateNode = new DecisionTreeNode("Participate in spellcasting lessons");
    attendClassesNode->addChild(participateNode);
    DecisionTreeNode* joinClubNode = new DecisionTreeNode("Join an extracurricular magic club");
    attendClassesNode->addChild(joinClubNode);
    DecisionTreeNode* exploreLibraryNode = new DecisionTreeNode("Explore the library for ancient tomes");
    attendClassesNode->addChild(exploreLibraryNode);

    // Explore the academy grounds
    DecisionTreeNode* exploreGroundsNode = new DecisionTreeNode("Explore the academy grounds");
    chapter1Node->addChild(exploreGroundsNode);
    // Add further nodes for exploreGroundsNode similarly

    // Visit the library
    DecisionTreeNode* visitLibraryNode = new DecisionTreeNode("Visit the library");
    chapter1Node->addChild(visitLibraryNode);
    // Add further nodes for visitLibraryNode similarly

    // Create the decision tree
    DecisionTree adventureTree(startNode);

    // Create SFML window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Choose Your Own Adventure");
    sf::Event event;

    // Start the adventure by traversing the decision tree
    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            // Handle mouse click events to select choices
            // For simplicity, let's assume choices are selected by pressing number keys 1, 2, 3, ...
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code >= sf::Keyboard::Num1 && event.key.code <= sf::Keyboard::Num9) {
                    // Convert key code to choice index
                    int choiceIndex = event.key.code - sf::Keyboard::Num1;
                    // Process the choice (not implemented here)
                    std::cout << "You chose option " << choiceIndex + 1 << std::endl;
                }
            }
        }

        window.clear();
        // Display current text and choices
        drawText(window, "Chapter 1: The Arcane Academy\n");
        drawText(window, "You wake up in your dormitory at the Arcane Academy, surrounded by fellow aspiring sorcerers.\n");
        drawText(window, "What will you do?\n");
        drawText(window, "1. Attend your first day of classes\n");
        drawText(window, "2. Explore the academy grounds\n");
        drawText(window, "3. Visit the library\n");
        // Draw buttons for choices
        // ...

        window.display();
    }

    // Clean up allocated memory
    delete startNode;
    // Delete other nodes similarly

    return 0;
}

/*
int main() {
    // Create a player object
    Player player;

    // Start the adventure
    std::cout << "Welcome to Sorcerer's Journey: Rise Against the Goblins!\n";

    // Define decision tree nodes for each chapter
    DecisionTreeNode* startNode = new DecisionTreeNode("Start");

    // Chapter 1
    DecisionTreeNode* chapter1Node = new DecisionTreeNode("Chapter 1: The Arcane Academy");
    startNode->addChild(chapter1Node);

    DecisionTreeNode* attendClassesNode = new DecisionTreeNode("Attend your first day of classes");
    chapter1Node->addChild(attendClassesNode);
    // Add further nodes for attendClassesNode similarly

    DecisionTreeNode* exploreGroundsNode = new DecisionTreeNode("Explore the academy grounds");
    chapter1Node->addChild(exploreGroundsNode);
    // Add further nodes for exploreGroundsNode similarly

    // Chapter 2
    DecisionTreeNode* chapter2Node = new DecisionTreeNode("Chapter 2: Training and Trials");
    startNode->addChild(chapter2Node);

    DecisionTreeNode* participateTournamentNode = new DecisionTreeNode("Participate in a dueling tournament");
    chapter2Node->addChild(participateTournamentNode);
    // Add further nodes for participateTournamentNode similarly

    DecisionTreeNode* assistExperimentNode = new DecisionTreeNode("Assist a professor in conducting an experiment");
    chapter2Node->addChild(assistExperimentNode);
    // Add further nodes for assistExperimentNode similarly

    DecisionTreeNode* undertakeQuestNode = new DecisionTreeNode("Undertake a quest to retrieve a powerful artifact");
    chapter2Node->addChild(undertakeQuestNode);
    // Add further nodes for undertakeQuestNode similarly

    // Chapter 3
    DecisionTreeNode* chapter3Node = new DecisionTreeNode("Chapter 3: Allies and Adversaries");
    startNode->addChild(chapter3Node);

    DecisionTreeNode* befriendAlchemistNode = new DecisionTreeNode("Befriend a talented alchemist");
    chapter3Node->addChild(befriendAlchemistNode);
    // Add further nodes for befriendAlchemistNode similarly

    DecisionTreeNode* formAllianceNode = new DecisionTreeNode("Form an alliance with a skilled warrior");
    chapter3Node->addChild(formAllianceNode);
    // Add further nodes for formAllianceNode similarly

    DecisionTreeNode* seekGuidanceNode = new DecisionTreeNode("Seek guidance from a wise elder mage");
    chapter3Node->addChild(seekGuidanceNode);
    // Add further nodes for seekGuidanceNode similarly

    // Chapter 4
    DecisionTreeNode* chapter4Node = new DecisionTreeNode("Chapter 4: Confronting the Darkness");
    startNode->addChild(chapter4Node);

    DecisionTreeNode* travelToFortressNode = new DecisionTreeNode("Travel to the Goblin King's fortress");
    chapter4Node->addChild(travelToFortressNode);
    // Add further nodes for travelToFortressNode similarly

    DecisionTreeNode* rallyForcesNode = new DecisionTreeNode("Rally the forces of Arvadia");
    chapter4Node->addChild(rallyForcesNode);
    // Add further nodes for rallyForcesNode similarly

    DecisionTreeNode* uncoverProphecyNode = new DecisionTreeNode("Uncover a hidden prophecy");
    chapter4Node->addChild(uncoverProphecyNode);
    // Add further nodes for uncoverProphecyNode similarly

    // Chapter 5
    DecisionTreeNode* chapter5Node = new DecisionTreeNode("Chapter 5: The Final Battle");
    startNode->addChild(chapter5Node);

    DecisionTreeNode* utilizeMagicNode = new DecisionTreeNode("Utilize mastery of elemental magic");
    chapter5Node->addChild(utilizeMagicNode);
    // Add further nodes for utilizeMagicNode similarly

    DecisionTreeNode* callUponAlliesNode = new DecisionTreeNode("Call upon allies for support");
    chapter5Node->addChild(callUponAlliesNode);
    // Add further nodes for callUponAlliesNode similarly

    DecisionTreeNode* tapIntoPotentialNode = new DecisionTreeNode("Tap into hidden magical potential");
    chapter5Node->addChild(tapIntoPotentialNode);
    // Add further nodes for tapIntoPotentialNode similarly

    // Create the decision tree
    DecisionTree adventureTree(startNode);

    // Start the adventure by traversing the decision tree
    adventureTree.traverseTree();

    // Clean up allocated memory
    delete startNode;
    // Delete other nodes similarly

    // Run each chapter of the adventure
    chapter1(player);
    chapter2(player);
    chapter3(player);
    chapter4(player);
    chapter5(player);

    // Game over
    std::cout << "Thanks for playing!\n";
    return 0;
}
*/