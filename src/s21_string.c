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

int s21_strcmp(const char* str1, const char* str2) {
    int len = 0;
    if (!str1 || !str2) {
        return 0;
    }
    while (str1[len] != '\0' || str2[len] != '\0') {
        if (str1[len] != str2[len]) {
            return 0;
        }
        len++;
    }
    if ((str1[len] == '\0' && str2[len] != '\0') || (str1[len] != '\0' && str2[len] == '\0')) {
        return 0;
    }
    return 1;
}

int s21_strcpy(char* destination, const char* source) {
    if (!source) {
        return 0;
    }
    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
    return 1;
}
