//
#include <iostream>
#include <memory>
#include <vector>
#include "roll.h"

#ifndef SHOOTER_H
#define SHOOTER_H
#include <iostream>

class Shooter
{
public:
    Roll* throw_die(Die& die1, Die& die2);
    void display_all_rolls();
    ~Shooter();
private:
    std::vector<Roll*> rolls;
};

#endif