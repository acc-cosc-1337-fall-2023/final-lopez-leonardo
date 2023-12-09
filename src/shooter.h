//
#include <iostream>
#include <memory>
#include <vector>
#include "roll.h"

#ifndef SHOOTER_H
#define SHOOTER_H

class Shooter
{
public:
    Roll* throw_die(Die& die1, Die& die2);
    friend std::ostream& operator<<(std::ostream& os, const Roll& r);
    ~Shooter();
private:
    std::vector<Roll*> rolls;
};

#endif