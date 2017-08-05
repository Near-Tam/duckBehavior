/*
 * normalDuck.h
 *
 *  Created on: 2017-8-5
 *      Author: neablister
 */
#include "duckBase.h"

#ifndef NORMALDUCK_H_
#define NORMALDUCK_H_

class normalDuck : public duckBase{
public:
	normalDuck();
	virtual ~normalDuck();
	bool performFly();

};

#endif /* NORMALDUCK_H_ */
