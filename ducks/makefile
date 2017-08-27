libduckBase.so : ../IBoardCastToDucks/IBoardCastToDucks.cpp \
				 ../IBoardCastToDucks/BoardCastToBabyDucks.cpp \
				 ../IflyBehavior/libIflyBehavior.so \
				 ../IQuackBehavior/libIQuackBehavior.so \
				 babyDuck.cpp babyDuck.h duckBase.cpp \
				 duckBase.h normalDuck.cpp normalDuck.h
	g++ *.cpp *.h ../IBoardCastToDucks/*.cpp -shared -fPIC -o libduckBase.so -L../IflyBehavior -lIflyBehavior -L../IQuackBehavior -lIQuackBehavior
