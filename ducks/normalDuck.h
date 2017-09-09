/*
 * normalDuck.h
 *
 *  Created on: 2017-8-5
 *      Author: neablister
 */
#include "duckBase.h"
#include "../IBoardCastToDucks/IBoardCastToDucks.h"
#include "../IBoardCastToDucks/BoardCastToBabyDucks.h"
#include "../IflyBehavior/IflyBehavior.h"
#include "../IflyBehavior/flyWithWings.h"
#include "../IQuackBehavior/IQuackBehavior.h"
#include "../IQuackBehavior/Quack.h"

#ifndef NORMALDUCK_H_
#define NORMALDUCK_H_

class normalDuck : public duckBase{
public:
	normalDuck(char* name);
	virtual ~normalDuck();

	char* Name;
	virtual bool fly();
	virtual bool quack();
	void registerObservers(babyDuck* Observer);
	void removeObervers(babyDuck* Observer);
	void notifyObservers();
	void callBabyDucks();

private:
	IflyBehavior* flySkill = new flyWithWings();
	IQuackBehavior* quackSkill = new Quack();
	IBoardCastToDucks* callBabyDucksSkill = new BoardCastToBabyDucks();

};

#endif /* NORMALDUCK_H_ */
