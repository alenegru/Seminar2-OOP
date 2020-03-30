#pragma once
#include <string>
#include <iostream>
using namespace std;

char* strfind(const char* s, const char* f) {
    int char_f = 0;
    while (char_f < strlen(f)) {
        int char_s = 0;
        int aux = char_f;
        while (f[char_f] == s[char_s] && char_s < strlen(s)) {
            char_f++;
            char_s++;
        }
        if (char_s == strlen(s)) {
            return const_cast<char*s>(&f[aux]);
        }
        char_f++;
    }
    return NULL;
}

int strlen2(char* s) {
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

char *strcpy2(char* s, char *s2) {
    int i = 0;
    do {
        s2[i] = s[i];
        i++;
    } while (s[i] != '\0');
    return s2;
}

