#ifndef STATE_H_H_
#define STATE_H_H_

class Person;
class State
{
public:
	virtual void execute(Person* person)=0;
	virtual ~State()=0;
};
#endif
