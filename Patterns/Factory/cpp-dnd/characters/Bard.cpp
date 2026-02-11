#include "../characters/Bard.h"

Bard::Bard()
{
    modifiers = {
        {StatType::Intelligence, 0},
        {StatType::Strength, 1},
        {StatType::Dexterity, -1},
        {StatType::Constitution, 2},
        {StatType::Wisdom, 1},
        {StatType::Charisma, 3}};
}

int Bard::getModifier(StatType stat) const
{
    auto i = modifiers.find(stat);
    if (i != modifiers.end())
        return i->second;
    return 0;
}

std::string Bard::getClassName() const
{
    return "Bard";
}

std::string Bard::introduceSelf() const
{
    return "Every great battle deserves a great song!";
}
