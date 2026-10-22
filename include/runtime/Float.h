#ifndef RUNTIME_FLOAT_H
#define RUNTIME_FLOAT_H

#include "common.h"

/* A double's little-endian IEEE-754 words, used without arithmetic conversion. */
union RuntimeDoubleWords {
    f64 value;
    u64 raw;
    struct {
        /* 0x00 */ u32 low;
        /* 0x04 */ u32 high;
    } words;
};

/* The soft-float normalization helpers pass their three results in r0-r2. */
struct RuntimeNormalizedDouble {
    /* 0x00 */ s32 exponent;
    /* 0x04 */ u32 high;
    /* 0x08 */ u32 low;
};

#endif
