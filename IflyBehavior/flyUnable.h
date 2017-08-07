/*
 * flyUnable.h
 *
 *  Created on: 2017-8-7
 *      Author: tanzhiyuan
 */

#ifndef FLYUNABLE_H_
#define FLYUNABLE_H_
#include "IflyBehavior.h"

class flyUnable: public IflyBehavior {
public:
	flyUnable();
	virtual ~flyUnable();
	virtual bool fly() const;
};

#endif /* FLYUNABLE_H_ */
