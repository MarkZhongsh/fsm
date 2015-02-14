#ifndef FSM_H_H_
#define FSM_H_H_

#include "cocos2d.h"

class State;
class Person;

class FSM : public cocos2d::CCNode
{
public:
	FSM();
	void changeState(State* state);
	void update(float dt);
	bool initWithPerson(Person* person);
public:
	static FSM* createWithPerson(Person* person);
private:
	State* currState;
	Person* person;
};
#endif
