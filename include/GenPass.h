/*
GenPass.h - Заголовочный файл для генератора паролей

Терземан Андрей Александрович
МК-101
*/
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
typedef enum _alphacase {
    LOWER = 0,
    UPPER,
    DIGIT,
    SPECIAL_SIM
} AlphaCase;

bool CheckFlags_and_GeneratePasswords(int argc, char** argv);

char* GeneratePassword(int minLen, int maxLen, int len, const char* alphabet);

char* GetAlphabet(const char* enteredSymbols);