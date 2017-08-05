/*
 * normalDuck.cpp
 *
 *  Created on: 2017-8-5
 *      Author: neablister
 */
#include "../IflyBehavior/IflyBehavior.h"
#include "../IflyBehavior/flyWithWings.h"
#include "normalDuck.h"
#include "duckBase.h"

normalDuck::normalDuck() {
	// TODO Auto-generated constructor stub

}

normalDuck::~normalDuck() {
	// TODO Auto-generated destructor stub
}

bool normalDuck::performFly(){
	flyWithWings* flySkill;
	this->fly(flySkill);
	return true;
}
