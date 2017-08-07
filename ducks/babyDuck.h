/*
 * babyDuck.h
 *
 *  Created on: 2017-8-7
 *      Author: tanzhiyuan
 */
#include "duckBase.h"
#ifndef BABYDUCK_H_
#define BABYDUCK_H_

class babyDuck : public duckBase{
public:
	babyDuck();
	virtual ~babyDuck();
	virtual bool fly();
};

#endif /* BABYDUCK_H_ */
