/*
 * babyDuck.h
 *
 *  Created on: 2017-8-7
 *      Author: tanzhiyuan
 */
#include "duckBase.h"
#include "../IflyBehavior/IflyBehavior.h"
#include "../IflyBehavior/flyUnable.h"
#include "../IQuackBehavior/IQuackBehavior.h"
#include "../IQuackBehavior/Quack.h"

#ifndef BABYDUCK_H_
#define BABYDUCK_H_

class babyDuck : public duckBase{
public:
	babyDuck(char* name);
	virtual ~babyDuck();

	char* Name;
	virtual bool fly();
	virtual bool quack();
	void getMsg();

private:
	IflyBehavior* flySkill;
	IQuackBehavior* quackSkill;
};

#endif /* BABYDUCK_H_ */
