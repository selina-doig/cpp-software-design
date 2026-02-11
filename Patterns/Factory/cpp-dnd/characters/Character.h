#pragma once
#include <string>
#include "../core/Stats.h"

class Character
{
public:
    virtual ~Character() = default;
    virtual std::string getClassName() const = 0;
    virtual std::string introduceSelf() const = 0;
    const Stats &getStats() const { return stats; }
    void setStat(StatType stat, int value) { stats.set(stat, value); }
    virtual int getModifier(StatType type) const = 0;

protected:
    Stats stats;
};