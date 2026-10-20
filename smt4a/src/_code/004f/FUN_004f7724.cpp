#include "common.h"

extern "C" {

typedef struct Owner {
    /* 0x0000 */ u8 unk0000[0x1F54];
    /* 0x1F54 */ u32 first;
    /* 0x1F58 */ u32 second;
} Owner;

extern u32 FUN_0037eecc(u32 a, u16 b, s32 c);

/* Stores the results of FUN_0037eecc for the id with and without the flag at 0x1f54 and 0x1f58. */
void FUN_004f7724(Owner *owner, u32 id, u32 a, s32 flag)
{
    owner->first = FUN_0037eecc(a, id, flag != 0);
    owner->second = FUN_0037eecc(a, id, 0);
}

} /* extern "C" */
