#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string playerName;
    int experience;

public:
    Player() : playerName("Player"), experience(0) {}
    void setName(std::string name);
    std::string getName();
    void addExperience(int exp);
    int getExperience();
};

#endif // PLAYER_H
