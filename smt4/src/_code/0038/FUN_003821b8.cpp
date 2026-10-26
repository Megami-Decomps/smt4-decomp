#include "common.h"

extern "C" {

typedef struct StateInfo {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 kind;
} StateInfo;

typedef struct StateOwner {
    /* 0x000 */ u8 unk000[0xDA8];
    /* 0xDA8 */ StateInfo *info;
} StateOwner;

/* 4 when the owner's state info is of kind 6, else 5. */
u32 FUN_003821b8(StateOwner *owner)
{
    u32 result = 5;

    if (owner->info == NULL) {
        return 5;
    }
    if (owner->info->kind == 6) {
        result = 4;
    }
    return result;
}

} /* extern "C" */
