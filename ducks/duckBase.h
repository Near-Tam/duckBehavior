/*
 * duckBase.h
 *
 *  Created on: 2017-8-5
 *      Author: neablister
 */

#ifndef DUCKBASE_H_
#define DUCKBASE_H_

class duckBase {
public:

	duckBase();
	virtual ~duckBase();
	virtual bool fly()=0;

};

#endif /* DUCKBASE_H_ */
