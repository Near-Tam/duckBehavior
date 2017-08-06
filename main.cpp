/*
 * main.cpp
 *
 *  Created on: 2017-8-5
 *      Author: neablister
 */
#include "iostream"
#include "ducks/normalDuck.h"
#include "iostream"
using namespace std;

int main(){
	duckBase* duck1 = new normalDuck();
	duck1->fly();
	cout<< "end" <<endl;
	return 0;
}



