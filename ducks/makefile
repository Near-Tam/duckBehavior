libduckBase.so : ../IflyBehavior/libIflyBehavior.so ../IQuackBehavior/libIQuackBehavior.so babyDuck.cpp babyDuck.h duckBase.cpp duckBase.h normalDuck.cpp normalDuck.h
	g++ *.cpp *.h -shared -fPIC -o libduckBase.so -L../IflyBehavior -lIflyBehavior -L../IQuackBehavior -lIQuackBehavior
