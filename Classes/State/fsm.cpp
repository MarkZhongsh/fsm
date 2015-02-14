#include "fsm.h"
#include "Person.h"
#include "State.h"

USING_NS_CC;

FSM::FSM()
{
	currState = NULL;
	person = NULL;
}


bool FSM::initWithPerson(Person* person)
{
	if(!CCNode::init())
	{
		return false;
	}
	this->person = person;
	return true;
}

void FSM::changeState(State* state)
{
	CC_SAFE_DELETE(state);
	currState = state;
}

FSM* FSM::createWithPerson(Person* person)
{
	FSM* fsm = new FSM();

	if(fsm && fsm->initWithPerson(person))
	{
		fsm->autorelease();
	}
	else
	{
		CC_SAFE_DELETE(fsm);
		fsm = NULL;
	}

	return fsm;
}

void FSM::update(float dt)
{
	this->currState->execute(person);
}
