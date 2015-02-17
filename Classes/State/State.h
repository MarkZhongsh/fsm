#ifndef STATE_H_H_
#define STATE_H_H_

#include "cocos2d.h"

class Person;
class State : public cocos2d::CCObject
{
public:
	virtual void execute(Person* person)=0;
	virtual ~State()=0;
};
#endif
