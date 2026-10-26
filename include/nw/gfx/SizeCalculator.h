#pragma once
#include "common.h"

/* Accumulates the size and alignment a set of allocations needs: running size/alignment of a memory block layout. */
typedef struct SizeCalculator {
    /* 0x00 */ u32 size;
    /* 0x04 */ u32 alignment;     /* alignment currently in force */
    /* 0x08 */ u32 maxAlignment;  /* largest alignment seen */
} SizeCalculator;
