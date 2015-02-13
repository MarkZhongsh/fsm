#include "Person.h"

USING_NS_CC;

Person::Person()
{
	currState = NULL;
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
	this->scheduleUpdate();
	return true;
}


void Person::changeState(State* state)
{
	if(this->currState)
	{
		CC_SAFE_DELETE(currState);
	}
	this->currState = state;
}

void Person::update(float dt)
{
	this->currState->execute(this);
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
