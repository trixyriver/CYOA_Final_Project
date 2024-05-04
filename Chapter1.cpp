#include "Chapter1.h"
#include "DecisionTree.h"
#include "Player.h" // Include Player header file

void chapter1(Player& player, DecisionTree& decisionTree) {
    // Your implementation of the chapter1 function goes here
    // For example:
    decisionTree.traverseTree(player);
}
 
/*
void chapter1(Player& player, DecisionTree& decisionTree) {
    std::cout << "Chapter 1: The Arcane Academy\n";

    // Introduction
    std::cout << "You wake up in your dormitory at the Arcane Academy, surrounded by fellow aspiring sorcerers.\n";
    std::cout << "As you glance out the window, you see the sun casting its warm light over the ancient towers of the academy.\n";
    std::cout << "Today marks the beginning of your journey into the world of magic.\n\n";

    // Display choices and gather user input
    std::cout << "What will you do?\n";
    std::cout << "1. Attend your first day of classes\n";
    std::cout << "2. Explore the academy grounds\n";
    std::cout << "3. Visit the library\n";

    int choice = 0;
    std::cin >> choice;

    // Update player's experience based on decision and provide additional story dialogue
    switch (choice) {
        case 1:
            // Decision: Attend your first day of classes
            std::cout << "\nYou decide to attend your first day of classes.\n";
            std::cout << "Walking through the grand halls of the Arcane Academy, you marvel at the magical tapestries that adorn the walls, depicting legendary battles and mythical creatures.\n";
            std::cout << "The air is charged with anticipation as you take your seat among your fellow students, eager to learn the secrets of magic.\n";
            std::cout << "Throughout the day, you engage in spellcasting lessons, honing your skills under the guidance of experienced instructors.\n";
            std::cout << "With each incantation and gesture, you feel a sense of accomplishment wash over you, knowing that you're one step closer to mastering the arcane arts.\n\n";
            player.addExperience(20); // Increase experience by 20
            break;
        case 2:
            // Decision: Explore the academy grounds
            std::cout << "\nYou decide to explore the academy grounds.\n";
            std::cout << "Venturing into the lush gardens and winding pathways of the academy, you stumble upon ancient statues and enchanted fountains, each telling a story of the academy's rich history.\n";
            std::cout << "As you navigate through the maze-like gardens, you uncover forgotten relics and encounter magical creatures that inhabit the academy grounds.\n";
            std::cout << "With each new discovery, you gain a deeper understanding of the mystical forces that surround you, earning valuable experience through exploration and curiosity.\n\n";
            player.addExperience(15); // Increase experience by 15
            break;
        case 3:
            // Decision: Visit the library
            std::cout << "\nYou decide to visit the library.\n";
            std::cout << "Entering the library, you're greeted by the scent of old parchment and the soft glow of candlelight that illuminates row upon row of dusty tomes and ancient scrolls.\n";
            std::cout << "The shelves groan under the weight of centuries of knowledge, beckoning you to delve into their secrets.\n";
            std::cout << "Lost in the labyrinth of knowledge, you uncover forgotten incantations and unlock the secrets of ancient magics.\n";
            std::cout << "With each page turned, you feel a surge of power coursing through you, as the wisdom of the ages becomes your own.\n";
            std::cout << "In the quiet solitude of the library, you earn experience not just through study, but through the discovery of hidden truths and the mastery of ancient lore.\n\n";
            player.addExperience(25); // Increase experience by 25
            break;
        default:
            std::cout << "\nInvalid choice.\n";
            break;
    }
}
*/



