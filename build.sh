#!/bin/sh

path=$(pwd)

#make IQuackBehavior
cd ${path}/IQuackBehavior
make

#make IflyBehavior
cd ${path}/IflyBehavior
make

#make IBoardCastToDucks
cd ${path}/IBoardCastToDucks
make

#make ducks
cd ${path}/ducks
make

#make main
cd ${path}
make
