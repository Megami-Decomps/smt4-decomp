#include "shard/Shard0046.h"

extern "C" {

typedef struct PickObj {
    /* 0x000 */ u8 unk000[0x284];
    /* 0x284 */ u32 key284;
    /* 0x288 */ u8 unk288[4];
    /* 0x28C */ u32 job28C;
    /* 0x290 */ u32 key290;
    /* 0x294 */ u8 unk294[4];
    /* 0x298 */ u32 job298;
    /* 0x29C */ u8 unk29C[0x18];
    /* 0x2B4 */ u32 *current;
} PickObj;

extern s32 FUN_00357bc8(u32 key, u32 arg);
extern void FUN_00275f44(u32 job, s32 index);

/* Picks the entry through FUN_00357bc8 (the +0x290 key first, else the +0x284 key with `arg`) and starts it. */
s32 pickObjStart(PickObj *obj, u32 arg)
{
    s32 index = FUN_00357bc8(obj->key290, arg);
    u32 *job;

    if (index != -1) {
        job = &obj->job298;
    } else {
        index = FUN_00357bc8(obj->key284, arg);
        job = &obj->job28C;
    }
    obj->current = job;
    FUN_00275f44(*job, index);
    return index;
}

} /* extern "C" */
