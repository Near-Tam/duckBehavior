libduckBase.so : ../IflyBehavior/libIflyBehavior.so ../IQuackBehavior/libIQuackBehavior.so babyDuck.cpp babyDuck.h duckBase.cpp duckBase.h normalDuck.cpp normalDuck.h
	export LD_LIBRARY_PATH=$(pwd):$LD_LIBRARY_PATH
	g++ *.cpp *.h -shared -fPIC -o libduckBase.so -L../IflyBehavior -lIflyBehavior -L../IQuackBehavior -lIQuackBehavior
