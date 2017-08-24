libIflyBehavior.so : flyUnable.cpp flyUnable.h flyWithWings.cpp flyWithWings.h IflyBehavior.cpp IflyBehavior.h
	export LD_LIBRARY_PATH=$(pwd):$LD_LIBRARY_PATH
	g++ fly* Ifly* -shared -fPIC -o libIflyBehavior.so
