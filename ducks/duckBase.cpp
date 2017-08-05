/*
 * duckBase.cpp
 *
 *  Created on: 2017-8-5
 *      Author: neablister
 */

#include "duckBase.h"
#include "../IflyBehavior/IflyBehavior.h"
#include "../IflyBehavior/flyWithWings.h"

duckBase::duckBase() {
	// TODO Auto-generated constructor stub

}

duckBase::~duckBase() {
	// TODO Auto-generated destructor stub
}

bool duckBase::fly(flyWithWings *flySkill){
	flySkill->fly();
	return true;
}
