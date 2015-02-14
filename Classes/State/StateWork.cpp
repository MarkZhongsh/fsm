#include "StateWork.h"
#include "StateRest.h"
#include "Person.h"
#include "fsm.h"

void StateWork::execute(Person* person)
{
	if(person->isTire())
	{
		person->rest();
		person->getFSM()->changeState(new StateRest());
		//person->changeState(new StateRest());
	}
}

StateWork::~StateWork()
{
}
