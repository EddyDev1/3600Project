major1: endian.c  clz.c parity.c rotate.c major.c major.h
	gcc -Wall -o major1 clz.c parity.c endian.c rotate.c major.c -I.

clean:
	rm -f '*.out'
