#include <iostream>
#include "factory/CharacterFactory.h"
#include "characters/Character.h"
#include "core/DiceRoller.h"
#include <vector>
#include <memory>

int main()
{
    std::vector<std::unique_ptr<Character>> party;
    party.push_back(CharacterFactory::createCharacter(CharacterType::Wizard));
    party.push_back(CharacterFactory::createCharacter(CharacterType::Fighter));
    party.push_back(CharacterFactory::createCharacter(CharacterType::Bard));
    DiceRoller diceRoller;

    for (auto &character : party)
    {
        std::cout << "\nHello, I am a " << character->getClassName() << ". "
                  << character->introduceSelf() << std::endl;

        diceRoller.rollCharacterStats(*character);

        std::cout << "\nFinal Stats for " << character->getClassName() << ": \n";
        character->getStats().print();
        std::cout << std::endl;
    }
}