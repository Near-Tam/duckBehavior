/*
 * IQuackBehavior.h
 *
 *  Created on: 2017-8-13
 *      Author: neablister
 */

#ifndef IQUACKBEHAVIOR_H_
#define IQUACKBEHAVIOR_H_

class IQuackBehavior {
public:
	IQuackBehavior();
	virtual bool quack() const=0;
	virtual ~IQuackBehavior();
};

#endif /* IQUACKBEHAVIOR_H_ */
