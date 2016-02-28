# Makefile for the calculator program.  (c) Iain McDonald, 1996

# This defines how to produce the calculator program
# from the object files (which have .o extensions).
# We use gcc to link the .o files into the calculator executable.
# Note the use of -lm to link in the standard maths library too.

all:	calculator

clean:
	rm calculator *.o

calculator:	bcalc.o fcalc.o main.o util.o
	gcc -o calculator bcalc.o fcalc.o main.o util.o -lm

# The file bcalc.o depends on its source file bcalc.c,
# and the two header files.  We use gcc to compile
# bcalc.c into bcalc.o.

bcalc.o:	bcalc.c types.h constants.h
	gcc -c bcalc.c

fcalc.o:	fcalc.c types.h constants.h
	gcc -c fcalc.c

util.o:	util.c types.h constants.h
	gcc -c util.c

main.o:	main.c types.h
	gcc -c main.c



