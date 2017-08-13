/*
 * babyDuck.cpp
 *
 *  Created on: 2017-8-7
 *      Author: tanzhiyuan
 */
#include "../IflyBehavior/IflyBehavior.h"
#include "babyDuck.h"
#include "../IflyBehavior/flyUnable.h"
babyDuck::babyDuck() {
	// TODO Auto-generated constructor stub

}

babyDuck::~babyDuck() {
	// TODO Auto-generated destructor stub
}

bool babyDuck::fly(){
	IflyBehavior* flySkill = new flyUnable();
	flySkill->fly();
	return true;
}

bool babyDuck::quack(){
	return true;
}
