/* NON_MATCHING: same element copy; retail loads the first eight words as vldm {s0-s2} + {s3-s7} then stores them with one vstmia and copies the last two words afterwards (via ldr r2,[r1,#36]/ldr r1,[r1,#32]); built uses one vldm and ldrd/strd for the tail */
#include "common.h"

extern "C" {

struct PoolElement {
    /* 0x00 */ f32 values[8];
    /* 0x20 */ u32 extra[2];
};

struct PoolDimensions {
    /* 0x00 */ u8 unk00[0xc0];
    /* 0xc0 */ s32 columns;
    /* 0xc4 */ s32 rows;
};

struct ElementPool {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 baseIndex;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ PoolElement *elements;
    /* 0x1c */ u8 unk1c[4];
    /* 0x20 */ PoolDimensions *dimensions;
};

/* Copies `source` into the element `columns * rows` slots further on (scaled by its index), clearing the copy's fifth value to -1. */
void FUN_0024b5f0(ElementPool *pool, PoolElement *source)
{
    s32 stride = pool->dimensions->rows * pool->dimensions->columns;
    PoolElement *target;

    if (stride == 0) {
        return;
    }
    target = &pool->elements[((u32)source - (u32)pool->elements) / sizeof(PoolElement) * stride + pool->baseIndex];
    *target = *source;
    *(u32 *)&target->values[4] = 0xffffffff;
}

} /* extern "C" */
