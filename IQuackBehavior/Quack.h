/*
 * Quack.h
 *
 *  Created on: 2017-8-13
 *      Author: neablister
 */
#include "IQuackBehavior.h"

#ifndef QUACK_H_
#define QUACK_H_

class Quack :public IQuackBehavior{
public:
	Quack();
	virtual bool quack() const;
	virtual ~Quack();
};

#endif /* QUACK_H_ */
