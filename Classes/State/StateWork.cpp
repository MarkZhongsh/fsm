#include "StateWork.h"
#include "StateRest.h"
#include "Person.h"

void StateWork::execute(Person* person)
{
	if(person->isTire())
	{
		person->rest();
		person->changeState(new StateRest());
	}
}
