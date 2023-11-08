#include "s21_string.h"

#include <stdio.h>

int s21_strlen(const char* str) {
    int len = 0;
    if (!str) {
        return 0;
    }
    while (str[len] != '\0') {
        len++;
    }
    return len;
}