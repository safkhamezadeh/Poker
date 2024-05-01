#pragma once
#include <string>

class Player {
public:
    //constructor
    Player(std::string name, int money);

    //getter and setters
    int getMoney() const;
    void updateMoney(int value);
    bool isFolded() const;
    std::string getName() const;

    //player actions;
    int raise(int raiseAmount);
    int bet(int betAmount);
    int call(int callAmount);
    void setFold(bool fold);


private:
    int money;
    std::string name;
    bool fold;
};
