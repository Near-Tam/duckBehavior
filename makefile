main : main.cpp ./IQuackBehavior/libIQuackBehavior.so ./IflyBehavior/libIflyBehavior.so ./ducks/libduckBase.so
	export LD_LIBRARY_PATH=$(pwd):$LD_LIBRARY_PATH
	g++ main.cpp -o main -L./ducks -lduckBase -L./IflyBehavior -lIflyBehavior -L./IQuackBehavior -lIQuackBehavior
