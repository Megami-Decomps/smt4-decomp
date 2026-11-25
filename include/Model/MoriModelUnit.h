#ifndef MODEL_MORIMODELUNIT_H
#define MODEL_MORIMODELUNIT_H

#include "common.h"
#include <stddef.h>

/* Array view used for the model unit's node positions. Its storage is supplied by the caller. */
struct FloatArray {
    /* 0x00 */ f32 *values;
    /* 0x04 */ u32 count;

    f32 &operator[](s32 index) { return values[index]; }
};
typedef char FloatArrayLayoutCheck[sizeof(FloatArray) == 8 && offsetof(FloatArray, count) == 4 ? 1 : -1];

struct IdArray {
    /* 0x00 */ u16 *values;
    /* 0x04 */ u32 count;
};
struct MoriModelUnit {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ f32 unk04;
    /* 0x08 */ f32 unk08;
    /* 0x0c */ u32 unk0c;
    /* 0x10 */ u16 *indexStorage;
    /* 0x14 */ IdArray indices;
    /* 0x1c */ s32 count;
    /* 0x20 */ u8 enabled;
    /* 0x21 */ u8 unk21[0xb];
    /* 0x2c */ u32 unk2c;
};

#endif
