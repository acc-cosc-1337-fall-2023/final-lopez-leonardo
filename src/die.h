//Die Class
#ifndef DIE_CLASS_H
#define DIE_CLASS_H

class Die
{
public:
    void roll();
    int const rolled_value();
private:
    int roll_value;
    int sides{6};
};

#endif