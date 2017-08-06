/*
 * flyWithWings.h
 *
 *  Created on: 2017-8-5
 *      Author: neablister
 */

#ifndef FLYWITHWINGS_H_
#define FLYWITHWINGS_H_
#include "IflyBehavior.h"

class flyWithWings : public IflyBehavior {
public:
	flyWithWings();
	virtual ~flyWithWings();
	virtual bool fly() const;
};

#endif /* FLYWITHWINGS_H_ */
