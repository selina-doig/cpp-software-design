#include "../core/Stats.h"
#include "iostream"

Stats::Stats()
{
    for (auto stat : allStats())
        values[stat] = 0;
}

int Stats::get(StatType stat) const
{
    return values.at(stat);
}

void Stats::set(StatType stat, int value)
{
    values[stat] = value;
}

std::vector<StatType> Stats::allStats()
{
    return {StatType::Strength, StatType::Dexterity, StatType::Constitution,
            StatType::Intelligence, StatType::Wisdom, StatType::Charisma};
}

std::string statToString(StatType stat)
{
    switch (stat)
    {
    case StatType::Strength:
        return "Strength";
    case StatType::Dexterity:
        return "Dexterity";
    case StatType::Constitution:
        return "Constitution";
    case StatType::Intelligence:
        return "Intelligence";
    case StatType::Wisdom:
        return "Wisdom";
    case StatType::Charisma:
        return "Charisma";
    }
    return "";
}

void Stats::print() const
{
    for (auto stat : allStats())
    {
        std::cout << statToString(stat) << ": "
                  << get(stat) << std::endl;
    }
}