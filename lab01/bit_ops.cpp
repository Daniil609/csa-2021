#include "bit_ops.h"

unsigned get_bit(unsigned x,
                 unsigned n) {
    return (x & (1 << n)) >> n;
}

void set_bit(unsigned * x,
             unsigned n,
             unsigned v) {
        *x = (*x & ~(1 << n)) | (v << n);
}

void flip_bit(unsigned * x,
              unsigned n) {
        *x ^= (1 << n);
}

