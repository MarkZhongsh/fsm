#include "StateRest.h"
#include "Person.h"
#include "StatePlay.h"
#include "StateWork.h"
#include "fsm.h"

void StateRest::execute(Person* person)
{
	if(person->isWantToWork())
	{
		person->work();
		person->getFSM()->changeState(new StateWork());
		//person->changeState(new StateWork());
	}
	else
	{
		person->play();
		person->getFSM()->changeState(new StatePlay());
		//person->changeState(new StatePlay());
	}
}

StateRest::~StateRest()
{
}
