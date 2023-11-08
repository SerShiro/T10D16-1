#ifndef S21_STRING_H
#define S21_STRING_H

int s21_strlen(const char* str);
int s21_strcmp(const char* str1, const char* str2);
int s21_strcpy(char* destination, const char* source);
void s21_strcat(char* dest, const char* src);
char* s21_strchr(const char* str, int character);

#endif