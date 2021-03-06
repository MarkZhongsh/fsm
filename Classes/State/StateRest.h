#ifndef STATEREST_H_H_
#define STATEREST_H_H_

#include "State.h"
class Person;

class StateRest : public State
{
public:
	virtual void execute(Person* person);
	~StateRest();
    CREATE_FUNC(StateRest);
    virtual bool init();
};

#endif
