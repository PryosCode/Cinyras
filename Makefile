CC   = gcc
LIBS = curl
SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:.c=.o)

cinyras: $(OBJS)
	$(CC) -o $@ $(OBJS) -l $(LIBS)

clean:
	find . -name *.o -delete