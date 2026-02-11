#include "../core/DiceRoller.h"
#include <iostream>
#include "../characters/Character.h"
#include <random>

static int rollDie(int sides)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, sides);
    return dist(gen);
}

// roll 3 d6 dice to get stat
static int rollStat()
{
    int dice1 = rollDie(6);
    int dice2 = rollDie(6);
    int dice3 = rollDie(6);
    std::cout << "Rolled: " << dice1 << " " << dice2 << " " << dice3 << std::endl;
    return dice1 + dice2 + dice3;
}

Stats DiceRoller::rollCharacterStats(Character &character)
{
    Stats stats;
    for (auto stat : Stats::allStats())
    {
        std::cout << "\n\nRolling for " << statToString(stat) << "...\n";
        int charModifer = character.getModifier(stat);
        int roll = rollStat() + charModifer;
        std::cout << statToString(stat) << " plus modifier of " << charModifer << " is " << roll << std::endl;
        character.setStat(stat, roll);
    }
    return stats;
}