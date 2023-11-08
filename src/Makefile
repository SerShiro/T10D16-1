CC = gcc
CFLAGS = -Wall -Wextra -Werror
BUILD_DIR = ../build

all: strlen_tests

strlen_tests : s21_string.o s21_string_test.o
	$(CC) $(CFLAGS) s21_string.o s21_string_test.o -o $(BUILD_DIR)/Quest_1

$(BUILD_DIR)/s21_string.o : s21_string.c
	$(CC) $(CFLAGS)  s21_string.c -o s21_string.o

$(BUILD_DIR)/s21_string_test.o : s21_string_test.c
	$(CC) $(CFLAGS) -c s21_string_test.c  -o s21_string_test.o
	
clean:
	rm -f ./*.o
	rm -f $(BUILD_DIR)/Quest_1

