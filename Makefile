SRCS = $(wildcard src/*.c src/cli/*.c src/interpreter/*.c)

OBJS=$(SRCS:.c=.o)

cinyras: $(OBJS)
	gcc -o $@ $(OBJS)

clean:
	find . -name *.o -delete