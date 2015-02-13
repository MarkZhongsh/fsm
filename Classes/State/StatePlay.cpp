#include "StatePlay.h"
#include "StateRest.h"
#include "Person.h"

void StatePlay::execute(Person* person)
{
	if(person->isTire())
	{
		person->rest();
		person->changeState(new StateRest());
	}
}
