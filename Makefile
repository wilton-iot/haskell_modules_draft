
all:
	ghc --make -dynamic -shared -fPIC -lHSrts-ghc7.4.1 Foo.hs shim.c -o libfoo.so
	g++ --std=c++11 -ldl test.cpp -o test
	./test
