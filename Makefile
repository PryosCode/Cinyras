SRCS = $(wildcard src/*.c)

OBJS=$(SRCS:.c=.o)

cinyras: $(OBJS)
	gcc -o $@ $(OBJS)

clean:
	find . -name *.o -delete