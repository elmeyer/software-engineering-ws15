# minimal makefile for SE class
all: main test

# main depends on all cpp files
main: $(patsubst %.cpp,%.o,$(wildcard *.cpp))
	g++ --std=c++11 -Wall -o $@ $^

# a slightly ugly hack to make .o depend on .hpp if it exists
.SECONDEXPANSION:
%.o: %.cpp $$(wildcard $$*.hpp)
	g++ --std=c++11 -Wall -c -o $@ $<

test:
	./main dollarToEuro 10000

clean:
	rm main *.o

