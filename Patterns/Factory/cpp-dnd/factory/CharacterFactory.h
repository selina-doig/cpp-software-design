#include <memory>

enum class CharacterType
{
    Wizard,
    Fighter,
    Bard
};

class Character;

class CharacterFactory
{
public:
    static std::unique_ptr<Character> createCharacter(CharacterType type);
};