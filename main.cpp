/*
 * main.cpp
 *
 *  Created on: 2017-8-5
 *      Author: neablister
 */
#include "iostream"
#include "ducks/normalDuck.h"
#include "ducks/babyDuck.h"
using namespace std;

int main(){
	normalDuck* femalDuck = new normalDuck();
	femalDuck->fly();
	femalDuck->quack();

	babyDuck* babyDuck_Tom = new babyDuck();
	babyDuck* babyDuck_Jim = new babyDuck();
	babyDuck* babyDuck_Amy = new babyDuck();

	femalDuck->registerObservers(babyDuck_Tom);
	femalDuck->registerObservers(babyDuck_Jim);
	femalDuck->registerObservers(babyDuck_Amy);

	femalDuck->callBabyDucks();
	cout<< "end1" <<endl;
	femalDuck->removeObervers(babyDuck_Amy);

	femalDuck->callBabyDucks();

	cout<< "end" <<endl;
	return 0;
}



