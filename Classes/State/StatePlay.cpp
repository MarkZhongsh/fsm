#include "StatePlay.h"
#include "StateRest.h"
#include "Person.h"
#include "fsm.h"

void StatePlay::execute(Person* person)
{
	if(person->isTire())
	{
		person->rest();
		person->getFSM()->changeState(new StateRest());
	}
}

StatePlay::~StatePlay()
{
}
