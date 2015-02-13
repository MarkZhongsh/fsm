#include "StateRest.h"
#include "Person.h"
#include "StatePlay.h"
#include "StateWork.h"

void StateRest::execute(Person* person)
{
	if(person->isWantToWork())
	{
		person->work();
		person->changeState(new StateWork());
	}
	else
	{
		person->play();
		person->changeState(new StatePlay());
	}
}
