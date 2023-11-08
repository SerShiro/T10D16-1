CC = gcc
CFLAGS = -Wall -Wextra -Werror
BUILD_DIR = ../build

all: strlen_tests

strlen_tests : clean
	$(CC) $(CFLAGS) -D STRLEN s21_string.c s21_string_test.c -o $(BUILD_DIR)/Quest_1

strcmp_tests : clean
	$(CC) $(CFLAGS) -D STRCMP s21_string.c s21_string_test.c -o $(BUILD_DIR)/Quest_2

strcpy_tests : clean
	$(CC) $(CFLAGS) -D STRCPY s21_string.c s21_string_test.c -o $(BUILD_DIR)/Quest_3
	
clean:
	rm -f ./*.o
	rm -f $(BUILD_DIR)/Quest*

