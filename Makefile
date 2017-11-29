CC = g++
DEBUG = -g
CFLAGS = -std=c++11 -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
HEADERS = inc/common.h

SRCDIR = src
SRC = src/common.cpp src/bubble_sort.cpp src/insertion_sort.cpp src/selection_sort.cpp src/main.cpp

OBJS = main.o common.o bubble_sort.o insertion_sort.o selection_sort.o

all: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o sorting

main.o: $(SRCDIR)/main.cpp
	$(CC) $(CFLAGS) $(SRCDIR)/main.cpp

common.o: $(SRCDIR)/common.cpp
	$(CC) $(CFLAGS) $(SRCDIR)/common.cpp

bubble_sort.o: $(SRCDIR)/bubble_sort.cpp
	$(CC) $(CFLAGS) $(SRCDIR)/bubble_sort.cpp

insertion_sort.o: $(SRCDIR)/insertion_sort.cpp
	$(CC) $(CFLAGS) $(SRCDIR)/insertion_sort.cpp

selection_sort.o: $(SRCDIR)/selection_sort.cpp
	$(CC) $(CFLAGS) $(SRCDIR)/selection_sort.cpp

clean:
	rm *.o sorting*