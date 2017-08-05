/*
 * IflyBehavior.h
 *
 *  Created on: 2017-8-5
 *      Author: neablister
 */

#ifndef IFLYBEHAVIOR_H_
#define IFLYBEHAVIOR_H_

class IflyBehavior {
public:
	virtual bool fly() const=0;
	IflyBehavior();
	virtual ~IflyBehavior();
};

#endif /* IFLYBEHAVIOR_H_ */
