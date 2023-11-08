#include "s21_string.h"

#include <stdio.h>

void s21_strlen_test(const char *input, int expected) {
    int result = s21_strlen(input);
    printf("Input: \"%s\", Expected: %d, Result: %d, %s\n", input, expected, result,
           (result == expected) ? "SUCCESS" : "FAIL");
}
void s21_strcmp_test(const char *input1, const char *input2) {
    printf("Input1: \"%s\", Input2: \"%s\", Result: %s\n", input1, input2,
           s21_strcmp(input1, input2) ? "SUCCESS" : "FAIL");
}
void s21_strcpy_test(char *input, const char *expected) {
    char output[100];
    s21_strcpy(output, input);
    printf("Input: \"%s\", Result: \"%s\", %s\n", input, output,
           (s21_strcmp(expected, output) != 0) ? "SUCCESS" : "FAIL");
}
void s21_strcat_test(const char *input1, const char *input2, const char *expected) {
    char output[100];
    s21_strcpy(output, input1);
    s21_strcat(output, input2);
    printf("Input1: \"%s\", Input2: \"%s\", Result: \"%s\", %s\n", input1, input2, output,
           (s21_strcmp(expected, output) != 0) ? "SUCCESS" : "FAIL");
}
void s21_strchr_test(const char *input, int character, const char *expected) {
    char *result = s21_strchr(input, character);
    if ((result != NULL && expected != NULL && *result == character) || (result == expected)) {
        printf("Input: \"%s\", Character: '%c', Result: \"%s\", SUCCESS\n", input, character,
               (result != NULL) ? result : "NULL");
    } else {
        printf("Input: \"%s\", Character: '%c', Result: \"%s\", FAIL\n", input, character,
               (result != NULL) ? result : "NULL");
    }
}

int main() {
#ifdef STRLEN
    s21_strlen_test("Hello,\n World!", 14);
    s21_strlen_test("", 0);
    s21_strlen_test("A1", 2);
    s21_strlen_test("AB", 1);
#endif
#ifdef STRCMP
    s21_strcmp_test("ABC", "ABC");
    s21_strcmp_test("", "");
    s21_strcmp_test("1\n 2", "1\n 2");
    s21_strcmp_test("12", "1 2");
#endif
#ifdef STRCPY
    s21_strcpy_test("ABC", "ABC");
    s21_strcpy_test("", "");
    s21_strcpy_test("1\n 2", "1\n 2");
#endif
#ifdef STRCAT
    s21_strcat_test("ABC", "ABC", "ABCABC");
    s21_strcat_test("", "", "");
    s21_strcat_test("1\n 2", "1\n 2", "1\n 21\n 2");
    s21_strcat_test("1", "2", "1");
#endif
#ifdef STRCHR
    s21_strchr_test("Hello, World!", 'o', "o, World!");
    s21_strchr_test("12345", '4', "45");
    s21_strchr_test("aB", 'a', "aB");
#endif
    return 0;
}