#include <iostream>
#include <string>


enum class MonsterType 
{
    ORC,
    TROLL,
    ZOMBIE,
    GOBLIN
};


class Monster 
{
private:
    MonsterType type; 
    std::string name; 
    int health;    
public:

    Monster(MonsterType type, const std::string& name, int health) : type(type), name(name), health(health) {}

    void printMonster() const 
    {
        std::cout << "Тип: ";
        switch (type) 
        {
        case MonsterType::ORC:
            std::cout << "Орк";
            break;
        case MonsterType::TROLL:
            std::cout << "Тролль";
            break;
        case MonsterType::ZOMBIE:
            std::cout << "Зомбі";
            break;
        case MonsterType::GOBLIN:
            std::cout << "Ґоблін";
            break;
        }
        std::cout << "\nІм'я: " << name << "\nЗдоров'я: " << health << "\n\n";
    }
};

int main() 
{
    system("chcp 1251 > null");
    auto orc = Monster(MonsterType::ORC, "Мокуферс", 110);
    decltype(orc) troll(MonsterType::TROLL, "Хісфун", 150);


    orc.printMonster();
    troll.printMonster();

    return 0;
}
