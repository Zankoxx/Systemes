CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Cibles principales
all: spair ppair

spair: spair.o pair.o impair.o
	$(CC) $(CFLAGS) -o spair spair.o pair.o impair.o

ppair: ppair.o
	$(CC) $(CFLAGS) -o ppair ppair.o

# Règles de compilation des .o
spair.o: spair.c pair.h
	$(CC) $(CFLAGS) -c spair.c

pair.o: pair.c pair.h impair.h
	$(CC) $(CFLAGS) -c pair.c

impair.o: impair.c impair.h pair.h
	$(CC) $(CFLAGS) -c impair.c

ppair.o: ppair.c
	$(CC) $(CFLAGS) -c ppair.c

# Nettoyage
clean:
	rm -f *.o spair ppair