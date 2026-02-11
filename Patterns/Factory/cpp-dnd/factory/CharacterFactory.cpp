#include "../factory/CharacterFactory.h"
#include "../characters/Character.h"
#include "../characters/Wizard.h"
#include "../characters/Fighter.h"
#include "../characters/Bard.h"

std::unique_ptr<Character> CharacterFactory::createCharacter(CharacterType type)
{
    switch (type)
    {
    case CharacterType::Wizard:
        return std::make_unique<Wizard>();
    case CharacterType::Fighter:
        return std::make_unique<Fighter>();
    case CharacterType::Bard:
        return std::make_unique<Bard>();
    }
    return nullptr;
}