PROGRAM=vtest
SRCS:=vector.c \
	  main.c
CC=gcc
FLAGS:=-Wall -o $(PROGRAM) -lm

all:$(PROGRAM)

$(PROGRAM): $(SRCS)
	$(CC) $(SRCS) $(FLAGS)
