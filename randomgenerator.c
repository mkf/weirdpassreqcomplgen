//
// Created by mf on 10.08.18.
//

#include "randomgenerator.h"
#include "sys/random.h"
#include "stdlib.h"

signed char log2i(unsigned char n) {
    signed char r = 0;
    while (n >>= 1) ++r;
    return r;
}

signed char log2c(unsigned char n) {
    n++;
    signed char r;
    if (n != 0) {
        r = log2i(n);
    } else {
        r = log2i(--n);
        r++;
    }
    return r;
}

unsigned char *genrandombytes(size_t count) {
    auto r = malloc(count);
    getrandom(r, count, 0);
    return r;
}

unsigned char *gendigits(
        unsigned char min_count,
        unsigned char max_count,
        unsigned char base) {
}

