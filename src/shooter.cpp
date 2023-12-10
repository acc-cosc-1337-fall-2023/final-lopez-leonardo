//
#include "shooter.h"

Roll* Shooter::throw_die(Die& die1, Die& die2)
{
    Roll* r = new Roll(die1,die2);
    r->roll_die();
    rolls.push_back(r);
    return r;
}

void Shooter::display_all_rolls()
{
    for(auto instance : rolls)
    {
        std::cout << instance->roll_value() << "\n";
    }
}

Shooter::~Shooter()
{
    for(auto item : rolls)
    {
        delete[] item;
    }
}