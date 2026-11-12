#include <iostream>
#include <string>
class Character {
    std::string name_;
    int health_;
public:
    Character(const std::string& name, int health) : name_{name}, health_{health} {}
    virtual void describe()const =0;


    const std::string& getName() const { return name_; }
    int getHealth() const { return health_; }
    void takeDamage(int amount) {
        if (amount > 0) { health_ = amount >= health_ ? 0 : health_ - amount; }
    }

  virtual ~Character(){std::cout<<"Base destructor"<<std::endl;};


};
class Mage : public Character {
    static constexpr int STARTING_HEALTH = 80;
    static constexpr int STARTING_MANA = 100;
    int mana_;
public:
    explicit Mage(const std::string& name)
        : Character{name, STARTING_HEALTH}, mana_{STARTING_MANA} {}

    int getMana() const { return mana_; }
    void describe() const override { std::cout<<"Health = "<< getHealth()<<"  mana = "<<mana_<<std::endl; }
    ~Mage() {std::cout<<"Mage destructor"<<std::endl;}
};
class ScoutMage : public Mage {
    static constexpr int STARTING_RANGE = 30;
    int range_;
public:
    explicit ScoutMage(const std::string& name) : Mage{name}, range_{STARTING_RANGE} {}

    void describe() const override  {
        std::cout << getName() << " health=" << getHealth()
                  << " mana=" << getMana() << " range=" << range_ << '\n';
    }
    ~ScoutMage() override {std::cout<<"Scout destructor"<<std::endl;}
};
class HealerMage : public Mage {
    static constexpr int STARTING_STRENGTH = 20;
    int strength_{STARTING_STRENGTH};
public:
    explicit HealerMage(const std::string& name) : Mage{name} {}
    int getHealingStrength() const { return strength_; }
    void describe() const override { std::cout << getName() << " health=" << getHealth()
        << " mana=" << getMana() << " healing=" << strength_ << '\n'; }
    ~HealerMage() {std::cout<<"Healer destructor"<<std::endl;}
};
/* Apply a trap to the supplied character. */

void applyTrap(Character& target, int amount)
{ target.takeDamage(amount); }

void show(Character* actor) {
    actor->describe();
}
template<typename T>
T add(T& num1, T& num2) {
    return num1 + num2;
}


int main() {
   std:: string num1 ="Hello";
    std:: string num2 ="World";
    std::cout<< add(num1, num2);

// Mage mage{"Mage"};
//     show(&mage);
//
//
//     ScoutMage first{"Ai"};
//     Mage second{"Bo"};
//     HealerMage third{"go"};
//
//
//
//         // add more objects of other classes here and include them in the collection
//         // and rerun the describe() function.
//         applyTrap(first, 10);
//         first.describe();
//         second.describe();
//         HealerMage healer{"Cy"};
//
//         applyTrap(healer, 10);
//         healer.describe();
//         applyTrap(healer, 0);
//         std::cout << "zero=" << healer.getHealth() << '\n';
//         applyTrap(healer, 1000);
//         std::cout << "excessive=" << healer.getHealth() << '\n';
//
//         std::cout<<"++++++++++++++++++++++++"<<std::endl;
//         std::cout<<"New stuff"<<std::endl;
//         std::cout<<"++++++++++++++++++++++++"<<std::endl;
//
//   Character* play[]{&first,&second,&third};
//     for (Character* member: play) {
//         member->describe();
//     }

   //  Mage* actor = new Mage("Mage");
   //  actor->describe();
   //  delete actor;
   // // actor = nullptr;

    }

