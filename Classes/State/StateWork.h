#ifndef STATEWORK_H_H_
#define STATEWORK_H_H_

#include "State.h"

class Person;
class StateWork : public State
{
public:
	virtual void execute(Person* person);
};
#endif
