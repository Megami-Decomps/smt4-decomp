#include "common.h"

extern "C" {

void FUN_00292268(void);
s32 FUN_0018719c(u32 id);

typedef struct Global5f0c7c {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 mode;
} Global5f0c7c;
extern Global5f0c7c DAT_005f0c7c;

/* Runs FUN_00292268 when FUN_0018719c(0x4D0) holds and the mode word is 1. */
void FUN_00243ea0(void)
{
    s32 flag;

    flag = FUN_0018719c(0x4D0);
    if (((flag != 0) && (DAT_005f0c7c.mode != 0)) && (DAT_005f0c7c.mode == 1)) {
        FUN_00292268();
        return;
    }
}

} /* extern "C" */
