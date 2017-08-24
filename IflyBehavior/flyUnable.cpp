/*
 * flyUnable.cpp
 *
 *  Created on: 2017-8-7
 *      Author: tanzhiyuan
 */
#include <iostream>
#include "flyUnable.h"
#include "IflyBehavior.h"
using namespace std;

flyUnable::flyUnable() {
	// TODO Auto-generated constructor stub

}

flyUnable::~flyUnable() {
	// TODO Auto-generated destructor stub
}

bool flyUnable::fly() const{
	cout<< "I can't fly!!" <<endl;
	return true;
}
