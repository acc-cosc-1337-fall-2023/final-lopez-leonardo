#include "die.h"
#include "roll.h"
#include "shooter.h"
#include "come_out_phase.h"
#include "point_phase.h"
#include <iostream>
using std::cout;

int main() 
{
	srand(time(0));
	Die d1;
	Die d2;
	Shooter s;
	Roll* roll;
	roll = s.throw_die(d1,d2);
	ComeOutPhase come_out_phase;

	while(come_out_phase.get_outcome(roll) == RollOutcome::natural || come_out_phase.get_outcome(roll) == RollOutcome::craps)
	{
		cout<<roll->roll_value()<<"\n";
		roll = s.throw_die(d1,d2);
	}

	cout<<roll->roll_value()<<": start of the point phase\n";
	cout<<"Roll until rolled value or 7 is rolled\n";

	int point = roll->roll_value();
	roll = s.throw_die(d1,d2);
	PointPhase point_phase(point);

	while(point_phase.get_outcome(roll) == RollOutcome::point ||point_phase.get_outcome(roll) == RollOutcome::nopoint)
	{
		cout<<roll->roll_value()<<": roll again\n";
		roll = s.throw_die(d1,d2);
	}

	cout<<roll->roll_value()<<": end of phase\n";
	s.display_all_rolls();

	return 0;
}