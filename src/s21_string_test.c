#include "s21_string.h"

#include <stdio.h>

void s21_strlen_test(const char *input, int expected) {
    int result = s21_strlen(input);
    printf("Input: \"%s\", Expected: %d, Result: %d, %s\n", input, expected, result,
           (result == expected) ? "SUCCESS" : "FAIL");
}

int main() {
    s21_strlen_test("Hello,\n World!", 14);
    s21_strlen_test("", 0);
    s21_strlen_test("12345", 5);
    s21_strlen_test("A", 1);
    s21_strlen_test("AB", 1);
    return 0;
}