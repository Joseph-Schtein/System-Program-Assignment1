CC=gcc
AR=ar 
OBJECTS_BASIC_MATH=basicMath.o
OBJECTS_POWER=power.o
OBJECTS_MAIN=main.o
FLAGS = -Wall -g

all:	 mymaths mains mymathd maind

mains:	 $(OBJECTS_MAIN) mymaths
	 $(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a 
maind:	 $(OBJECTS_MAIN) mymathd
	 $(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so
mymaths: $(OBJECTS_BASIC_MATH) $(OBJECTS_POWER)
	 $(AR) -rcs libmyMath.a $(OBJECTS_BASIC_MATH) $(OBJECTS_POWER)
mymathd: $(OBJECTS_BASIC_MATH) $(OBJECTS_POWER)
	 $(CC) -shared -o libmyMath.so $(OBJECTS_BASIC_MATH) $(OBJECTS_POWER)
basicMath.o: basicMath.c myMath.h
	 $(CC) $(FLAGS) -c -fPIC basicMath.c
power.o: power.c myMath.h
	 $(CC) $(FLAGS) -c -fPIC power.c
main.o:	 main.c myMath.h
	 $(CC) $(FLAGS) -c main.c
.PHONY: 
	all clean
clean: 
	 rm -rf *.o *.a *.so mains maind 
	
	



