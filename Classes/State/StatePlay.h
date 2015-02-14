#ifndef STATEPLAY_H_H_
#define STATEPLAY_H_H_

#include "State.h"

class Person;

class StatePlay : public State
{
public:
	virtual void execute(Person* person);
	virtual ~StatePlay();
};
#endif
