/*
 * normalDuck.cpp
 *
 *  Created on: 2017-8-5
 *      Author: neablister
 */
#include "../IflyBehavior/IflyBehavior.h"
#include "../IflyBehavior/flyWithWings.h"
#include "../IQuackBehavior/IQuackBehavior.h"
#include "../IQuackBehavior/Quack.h"
#include "normalDuck.h"
#include "duckBase.h"
#include "../IBoardCastToDucks/IBoardCastToDucks.h"
#include "../IBoardCastToDucks/BoardCastToBabyDucks.h"

normalDuck::normalDuck() {
	// TODO Auto-generated constructor stub

}

normalDuck::~normalDuck() {
	// TODO Auto-generated destructor stub
}

bool normalDuck::fly(){
	IflyBehavior* flySkill = new flyWithWings();
	flySkill->fly();
	return true;
}

bool normalDuck::quack(){
	IQuackBehavior* quackSkill = new Quack();
	quackSkill->quack();
	return true;
}

void normalDuck::registerObservers(babyDuck* Observer){
	(this->callBabyDucksSkill)->registerObservers(Observer);
}

void normalDuck::removeObervers(babyDuck* Observer){
	(this->callBabyDucksSkill)->removeObservers(Observer);
}

void normalDuck::notifyObservers(){
	(this->callBabyDucksSkill)->notifyObservers();
}

void normalDuck::callBabyDucks(){
	this->notifyObservers();
}
