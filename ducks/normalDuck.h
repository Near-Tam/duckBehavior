/*
 * normalDuck.h
 *
 *  Created on: 2017-8-5
 *      Author: neablister
 */
#include "duckBase.h"
#include "../IBoardCastToDucks/IBoardCastToDucks.h"
#include "../IBoardCastToDucks/BoardCastToBabyDucks.h"

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
	IBoardCastToDucks* callBabyDucksSkill = new BoardCastToBabyDucks();

};

#endif /* NORMALDUCK_H_ */
