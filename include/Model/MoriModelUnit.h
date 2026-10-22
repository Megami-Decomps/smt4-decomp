#ifndef MODEL_MORIMODELUNIT_H
#define MODEL_MORIMODELUNIT_H

#include "common.h"

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
