CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=myMath.o
FLAGS= -Wall -g

all: mymathd mymaths mains maind	
mains: $(OBJECTS_MAIN) myMath.a 
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) myMath.a
maind: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) myMath.so
mymathd: $(OBJECTS_LIB)
	$(CC) -shared -o myMath.so $(OBJECTS_LIB)
mymaths: $(OBJECTS_LIB)
	$(AR) -rcs myMath.a $(OBJECTS_LIB)	
myMath.o: myMath.c myMath.h
	$(CC) $(FLAGS) -c myMath.c
main.o: main.c myMath.h  
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind
