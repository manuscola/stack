CC=gcc
CFLAGS=-Wall
TARGET=test
default:$(TARGET)
SOURCE=stack.c stack_test.c

all : $(TARGET)

%o:%c
	$(CC)  $(CFLAGS) -o $@ -c $< 

$(TARGET) : stack.o stack_test.o
	$(CC) -o $@  $^

.PHONY: all clean
clean:
	rm -rf *.o
	rm -rf $(TARGET)

