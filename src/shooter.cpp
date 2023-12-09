//
#include "shooter.h"

Roll* Shooter::throw_die(Die& die1, Die& die2)
{
    Roll* r = new Roll(die1,die2);
    r->roll_die();
    rolls.push_back(r);
    return r;
}

std::ostream& operator<<(std::ostream& os, const Roll& r)
{
    os << r;
    return os;
}

Shooter::~Shooter()
{
    for(auto item : rolls)
    {
        delete[] item;
    }
}