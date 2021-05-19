CC   = gcc
SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:.c=.o)

cinyras: $(OBJS)
	$(CC) -o $@ $(OBJS)

clean:
	find . -name *.o -delete