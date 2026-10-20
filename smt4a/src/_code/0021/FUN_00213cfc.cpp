#include "common.h"

extern "C" {

typedef struct Global57f6c8 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s8 value;
} Global57f6c8;
extern Global57f6c8 DAT_0057f6c8;

/* Returns the signed byte at 0x4 of the global at 0x57F6C8. */
s32 FUN_00213cfc(void)
{
    return DAT_0057f6c8.value;
}

} /* extern "C" */
