all:
	g++	day1.cpp	-o	day1	&&	mv	day1	binaries
clean:
	rm	-rf	*.o	