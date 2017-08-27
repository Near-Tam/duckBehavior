/*
 * BoardCastToBabyDucks.cpp
 *
 *  Created on: 2017-8-27
 *      Author: neablister
 */

#include "BoardCastToBabyDucks.h"
#include "../ducks/babyDuck.h"
#include "IBoardCastToDucks.h"
#include <list>
#include <iostream>
using namespace std;

BoardCastToBabyDucks::BoardCastToBabyDucks() {
	// TODO Auto-generated constructor stub

}

BoardCastToBabyDucks::~BoardCastToBabyDucks() {
	// TODO Auto-generated destructor stub
}

void BoardCastToBabyDucks::registerObservers(babyDuck* Observer){
	Observers.push_back(Observer);
}

void BoardCastToBabyDucks::removeObservers(babyDuck* Observer){
	Observers.remove(Observer);
}

void BoardCastToBabyDucks::notifyObservers(){
	list<babyDuck*>::iterator iter = Observers.begin();
	for(; iter != Observers.end(); iter++)
	{
		(*iter)->getMsg();
	}
}

