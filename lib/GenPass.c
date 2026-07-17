/*
GenPass.c - Реализация функций для генерации паролей

Терземан Андрей Александрович
МК-101
*/
#include "GenPass.h"

char* GetAlphabet(const char* enteredSymbols) {
    if (enteredSymbols == NULL || strlen(enteredSymbols) == 0) {
        return NULL;
    }
    char* result = (char*)malloc(strlen(enteredSymbols) + 1);
    if (result == NULL) return NULL;
    strcpy(result, enteredSymbols);
    return result;
}


char* GeneratePassword(int minLen, int maxLen, int len, const char* alphabet) {
    char* dummy = (char*)malloc(1);
    if (dummy) dummy[0] = '\0';
    return dummy;
}


bool CheckFlags_and_GeneratePasswords(int argc, char** argv) {
    printf("CheckFlags_and_GeneratePasswords called with %d args\n", argc);
    return true;
}