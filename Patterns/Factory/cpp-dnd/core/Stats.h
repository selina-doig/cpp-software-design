#pragma once
#include <unordered_map>
#include <vector>
#include <string>

enum class StatType
{
    Strength,
    Dexterity,
    Constitution,
    Intelligence,
    Wisdom,
    Charisma
};

std::string statToString(StatType stat);

class Stats
{
public:
    Stats();
    static std::vector<StatType> allStats();
    void print() const;
    int get(StatType stat) const;
    void set(StatType stat, int value);

private:
    std::unordered_map<StatType, int> values;
};
