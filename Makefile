CC=gcc
CFLAGS=-O2
SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)
OUT=basic

all: $(OUT)

$(OUT): $(OBJS)
	$(CC) -o $(OUT) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
