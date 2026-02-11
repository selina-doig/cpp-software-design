#include "../characters/Character.h"
#include <unordered_map>

class Fighter : public Character
{
public:
    Fighter();
    int getModifier(StatType stat) const override;
    std::string getClassName() const override;
    std::string introduceSelf() const override;

private:
    std::unordered_map<StatType, int> modifiers;
};