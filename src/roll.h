//
#include "die.h"

#ifndef ROLL_H
#define ROLL_H

class Roll
{
public:
    Roll(Die& die1, Die& die2) : die1(die1) , die2(die2){}
    void roll_die();
    int const roll_value();
private:
    Die& die1;
    Die& die2;
    bool rolled = false;
    int value = die1.rolled_value() + die2.rolled_value();
};

#endif