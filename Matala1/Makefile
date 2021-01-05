OBJECTS_MAIN=main.o
OBJECTS_LIB=myBank.o	
CC = gcc
AR = ar
FLAGS = -Wall -g

all: myBanks mains

mains: $(OBJECTS_MAIN) myBanks
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyBank.a
	
myBanks: $(OBJECTS_LIB)
	$(AR) -rcs libmyBank.a $(OBJECTS_LIB)
	
myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c
	
main.o: main.c myBank.h
	$(CC) $(FLAGS) -c main.c


.PHONY: clean all
	
clean:
	rm -f *.o *.a mains

	
	







