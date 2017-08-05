/*
 * duckBase.h
 *
 *  Created on: 2017-8-5
 *      Author: neablister
 */
#include "../IflyBehavior/IflyBehavior.h"
#include "../IflyBehavior/flyWithWings.h"

#ifndef DUCKBASE_H_
#define DUCKBASE_H_

class duckBase {
public:
	bool fly(flyWithWings *flySkill);

	duckBase();
	virtual ~duckBase();

};

#endif /* DUCKBASE_H_ */
