#include "../characters/Wizard.h"

Wizard::Wizard()
{
    modifiers = {
        {StatType::Intelligence, 3},
        {StatType::Strength, -1},
        {StatType::Dexterity, 2},
        {StatType::Constitution, 1},
        {StatType::Wisdom, 1},
        {StatType::Charisma, 0}};
}

int Wizard::getModifier(StatType stat) const
{
    auto i = modifiers.find(stat);
    if (i != modifiers.end())
        return i->second;
    return 0;
}

std::string Wizard::getClassName() const
{
    return "Wizard";
}

std::string Wizard::introduceSelf() const
{
    return "Knowledge is power when you study arcane";
}