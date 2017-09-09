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

normalDuck::normalDuck(char* name) :
				Name(name)
{
	// TODO Auto-generated constructor stub
	this->callBabyDucksSkill = new BoardCastToBabyDucks();
	this->flySkill = new flyWithWings();
	this->quackSkill = new Quack();
}

normalDuck::~normalDuck() {
	// TODO Auto-generated destructor stub
}

bool normalDuck::fly(){
	this->flySkill = new flyWithWings();
	this->flySkill->fly();
	return true;
}

bool normalDuck::quack(){
	this->quackSkill = new Quack();
	this->quackSkill->quack();
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
