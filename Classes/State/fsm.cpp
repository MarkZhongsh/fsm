#include "fsm.h"
#include "Person.h"
#include "State.h"
#include "StateRest.h"

USING_NS_CC;
#define NOTIFY CCNotificationCenter::sharedNotificationCenter() 

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
    NOTIFY->addObserver(this,callfuncO_selector(FSM::onReceivce),"changestate",NULL);
	this->person = person;
	return true;
}

void FSM::changeState(State* state)
{
	CC_SAFE_DELETE(currState);
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

void FSM::onReceivce(CCObject* obj)
{
    CCLOG("onReceive");
    State* state = (StateRest*)obj;
    if(!state)
    {
        CCLOG("state is NULL");
    }
    changeState(state);
    currState->execute(person);
}
