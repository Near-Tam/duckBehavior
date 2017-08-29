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
	babyDuck(char* name);
	virtual ~babyDuck();

	char* Name;
	virtual bool fly();
	virtual bool quack();
	void getMsg();
};

#endif /* BABYDUCK_H_ */
