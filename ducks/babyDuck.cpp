/*
 * babyDuck.cpp
 *
 *  Created on: 2017-8-7
 *      Author: tanzhiyuan
 */
#include "../IflyBehavior/IflyBehavior.h"
#include "babyDuck.h"
#include "../IflyBehavior/flyUnable.h"
#include "../IQuackBehavior/IQuackBehavior.h"
#include "../IQuackBehavior/Quack.h"
#include "iostream"
using namespace std;

babyDuck::babyDuck(char* name) :
		Name(name)
{
	// TODO Auto-generated constructor stub
	this->quackSkill = new Quack();
	this->flySkill = new flyUnable();

}

babyDuck::~babyDuck() {
	// TODO Auto-generated destructor stub
}

bool babyDuck::fly(){
    this->flySkill = new flyUnable();
	this->flySkill->fly();
	return true;
}

bool babyDuck::quack(){
	this->quackSkill->quack();
	return true;
}

void babyDuck::getMsg(){
	cout<< this->Name << ": I get the message" <<endl;
	this->quack();
	cout<< "\n" <<endl;
}
