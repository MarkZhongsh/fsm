#ifndef STATEREST_H_H_
#define STATEPLAY_H_H_

#include "State.h"
class Person;

class StateRest : public State
{
public:
	virtual void execute(Person* person);
};

#endif
