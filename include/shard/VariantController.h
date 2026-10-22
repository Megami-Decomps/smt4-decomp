#ifndef SHARD_VARIANTCONTROLLER_H
#define SHARD_VARIANTCONTROLLER_H

#include "common.h"

struct VariantEntry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 flags;
};
struct VariantCollection {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 count;
};
struct VariantObject {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ VariantCollection *variants;
};
struct VariantController {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ VariantObject *object;
    /* 0x0c */ u8 unk0c[0x20];
    /* 0x2c */ s32 state;
};

#endif
