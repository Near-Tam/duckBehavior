#!/bin/sh

path=$(pwd)

#make IQuackBehavior
cd ${path}/IQuackBehavior
make

#make IflyBehavior
cd ${path}/IflyBehavior
make

#make ducks
cd ${path}/ducks
make
