#include "Person.h"
#include "fsm.h"
USING_NS_CC;

Person::Person()
{
	mFSM = NULL;
}

Person::~Person()
{
}


bool Person::init()
{
	if(!CCNode::init())
	{
		return false;
	}
	mFSM = FSM::createWithPerson(this);
	//mFSM->changeState(new StateRest());
	//mFSM->changeState(new StateRest());
	//person->changeState(new StateRest());
	mFSM->retain();
	this->scheduleUpdate();
	return true;
}


void Person::update(float dt)
{
	mFSM->update(dt);
}

void Person::work()
{
	CCLOG("working!");
}

void Person::play()
{
	CCLOG("Playing!");
}

void Person::rest()
{
	CCLOG("resting");
}

bool Person::isTire()
{
	return true;
}

bool Person::isWantToWork()
{
	return CCRANDOM_0_1() < 0.1f;
}

FSM* Person::getFSM()
{
	return mFSM;
}
