#include "common.h"

extern "C" {

typedef struct Global5c1bec {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 unk04;
} Global5c1bec;
extern Global5c1bec DAT_005c1bec;

/* Returns whether the word at 0x4 of the global at 0x5C1BEC is nonzero. */
u8 FUN_001a0ca4(void)
{
    return DAT_005c1bec.unk04 != 0;
}

} /* extern "C" */
