#include "../characters/Fighter.h"

Fighter::Fighter()
{
    modifiers = {
        {StatType::Intelligence, -2},
        {StatType::Strength, 3},
        {StatType::Dexterity, 2},
        {StatType::Constitution, 1},
        {StatType::Wisdom, 0},
        {StatType::Charisma, 1}};
}

int Fighter::getModifier(StatType stat) const
{
    auto i = modifiers.find(stat);
    if (i != modifiers.end())
        return i->second;
    return 0;
}

std::string Fighter::getClassName() const
{
    return "Fighter";
}

std::string Fighter::introduceSelf() const
{
    return "Point me at thy enemy!";
}