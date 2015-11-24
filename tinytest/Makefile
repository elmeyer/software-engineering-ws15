# minimal makefile for SE class
all: main test

# test-main depends on all cpp files of the parent directory except main
main: $(patsubst %.cpp,%.o,$(filter-out ../main.cpp, $(wildcard ../*.cpp)) tests.cpp)
	g++ --std=c++14 -Wall -o $@ $^

# a slightly ugly hack to make .o depend on .hpp if it exists
.SECONDEXPANSION:
%.o: %.cpp $$(wildcard $$*.hpp)
	g++ --std=c++14 -Wall -c -o $@ $<

test:
	./main

clean:
	rm main *.o

