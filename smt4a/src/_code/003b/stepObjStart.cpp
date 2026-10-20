#include "shard/Shard003B.h"

extern "C" {

typedef struct StepObj {
    /* 0x000 */ u8 unk000[0xEC];
    /* 0x0EC */ u32 unkEC;
    /* 0x0F0 */ u8 unk0F0[8];
    /* 0x0F8 */ u32 unkF8;
    /* 0x0FC */ u8 unk0FC[0x16];
    /* 0x112 */ u8 unk112;
    /* 0x113 */ u8 unk113;
    /* 0x114 */ u8 unk114;
} StepObj;

extern s32 FUN_00387ad8(StepObj *obj, s32 value);

/* Starts the step when FUN_00387ad8 allows it; returns the next state (3) or 0. */
u32 stepObjStart(StepObj *obj)
{
    u32 next = 0;

    if (FUN_00387ad8(obj, 0) != 0) {
        obj->unkF8 = 4;
        obj->unkEC = 3;
        obj->unk112 = 1;
        next = 3;
        obj->unk114 = 0;
    }
    return next;
}

} /* extern "C" */
