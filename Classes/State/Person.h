#ifndef PERSON_H_H_
#define PERSON_H_H_

#include "cocos2d.h"
#include "State.h"


class Person : public cocos2d::CCNode
{
public:
	Person();
	~Person();
	CREATE_FUNC(Person);
	virtual bool init();
	void update(float dt);
	void changeState(State* state);
	void work();
	void play();
	void rest();
	bool isTire();
	bool isWantToWork();
private:
	State* currState;
};
#endif
