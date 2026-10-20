/* NON_MATCHING: retail clears the three words at 0x18 with one stm of three registers (zeros copied into r0-r2); built stores each zero separately */
#include "common.h"

extern "C" {

typedef struct Object0034f5f8 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ s32 handle;     /* -1 when unset */
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ u32 words[3];
    /* 0x24 */ u8 flagA;
    /* 0x25 */ u8 flagB;
} Object0034f5f8;

void FUN_0034ec10(s32 handle);

/* Releases the object's handle (if set) and clears its flags and words. */
void FUN_0034f5f8(Object0034f5f8 *obj)
{
    if (obj->handle != -1) {
        FUN_0034ec10(obj->handle);
        obj->flagA = 0;
        obj->flagB = 0;
        obj->words[0] = 0;
        obj->words[1] = 0;
        obj->words[2] = 0;
    }
}

} /* extern "C" */
