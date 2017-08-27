/*
 * BoardCastToBabyDucks.h
 *
 *  Created on: 2017-8-27
 *      Author: neablister
 */
#include "IBoardCastToDucks.h"
#include "../ducks/babyDuck.h"
#include <list>
#include <iostream>
using namespace std;

#ifndef IBOARDCASTTODUCKS_BOARDCASTTOBABYDUCKS_H_
#define IBOARDCASTTODUCKS_BOARDCASTTOBABYDUCKS_H_

class BoardCastToBabyDucks :public IBoardCastToDucks {
public:
	BoardCastToBabyDucks();

	virtual void registerObservers(babyDuck* Observer);
	virtual void removeObservers(babyDuck* Observer);
	virtual void notifyObservers();

	virtual ~BoardCastToBabyDucks();

private:
	list<babyDuck*> Observers;
};

#endif /* IBOARDCASTTODUCKS_BOARDCASTTOBABYDUCKS_H_ */
