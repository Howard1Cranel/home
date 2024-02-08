#include "encrypt.h"

void encrypt(message)
{
    while (*message) {
        *message = *message ^ 31;
        message++;
    }
}