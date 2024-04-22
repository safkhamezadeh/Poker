#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    Player(std::string name, int money);
    int getMoney() const;
    void updateMoney(int value);
    std::string getName() const;
    bool isFolded() const;
    void setFold(bool fold);

private:
    int money;
    std::string name;
    bool fold;
};

#endif
