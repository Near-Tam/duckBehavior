/*
 * IBoardCastToDucks.h
 *
 *  Created on: 2017-8-27
 *      Author: neablister
 */
#include "../ducks/babyDuck.h"

#ifndef IBOARDCASTTODUCKS_IBOARDCASTTODUCKS_H_
#define IBOARDCASTTODUCKS_IBOARDCASTTODUCKS_H_

class IBoardCastToDucks {
public:
	IBoardCastToDucks();
	virtual void registerObservers(babyDuck* Observer) =0;
	virtual void removeObservers(babyDuck* Observer) =0;
	virtual void notifyObservers()=0;
	virtual ~IBoardCastToDucks();
};

#endif /* IBOARDCASTTODUCKS_IBOARDCASTTODUCKS_H_ */
