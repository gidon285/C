CC = gcc
CFLAG = -Wall -g 
AR = ar


mymaths: libmyMath.a

mymathd: libmyMath.so

mains:main.o libmyMath.a
	$(CC) $(CFLAG) -o mains main.o libmyMath.a

maind:main.o 
	$(CC) $(CFLAG) -o maind main.o ./libmyMath.so 

libmyMath.so:power.o basicMath.o myMath.h
	$(CC) $(CFLAG) -shared -o libmyMath.so power.o basicMath.o

libmyMath.a:power.o basicMath.o myMath.h
	$(AR) -rcs libmyMath.a power.o basicMath.o

main.o:main.c myMath.h
	$(CC) $(CFLAG) -c main.c 

basicMath.o:basicMath.c myMath.h
	$(CC) $(CFLAG) -fPIC -c basicMath.c 
	
power.o:power.c myMath.h
	$(CC) $(CFLAG) -fPIC -c power.c 

clean:
	rm -f *.o *.a *.so mains maind
	echo clean done

all:mymathd mymaths maind mains 

.PHONY: clean all