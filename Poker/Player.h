#pragma once
#include <string>

class Player {
public:
    //constructor
    Player(std::string name, int money);
    Player(std::string name);

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
    int money = 5000;
    std::string name;
    bool fold;
};
