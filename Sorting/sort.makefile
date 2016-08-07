# Makefile for Sorting Project

#-----------------Variables-------------------#
# The compiler:
CC = gcc

# Compiler flags:
# -g		adds debugging info to the exe file
# -Wall	turns on most compiler warnings
CFLAGS = --std=c11 -g -Wall

# Build target executable:
TARGET = sort
#------------------------------------------------#

#-----------------Build Tree--------------------#
# Default target entry, usally "all" or "default"
all: $(TARGET)

# To create executable file we need the main and Sorting lib obj files
$(TARGET): main.o SortingLib.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o SortingLib.o
	
# To create obj file main, we need the source file main.c
main.o: main.c
	$(CC) $(CFLAGS) -c main.c
	
# To create the obj file SortingLib.o, we need the source files
# SortingLib.c and SortingLib.h
SortingLib.o: SortingLib.c SortingLib.h
	$(CC) $(CFLAGS) -c SortingLib.c
#------------------------------------------------#


#----------------Cleaning up-------------------#
# To start over from scratch, use make with
# clean as the target. This removes the exe file,
# as well as old .o files nd *~ backup files:
#
clean:
	$(RM) $(TARGET) *.o *~