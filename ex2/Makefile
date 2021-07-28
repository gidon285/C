CC = gcc
CFLAG = -Wall -Wextra -g -o

all: 
	$(CC) main.c myBank.c $(CFLAG) main.o

git:
	git add -A
	git commit -m "$m"
	git push

test:
	./test.sh

clean:
	rm -f *.o