#include "common.h"

extern "C" {

typedef struct Global57f6c8 {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ s8 value;
} Global57f6c8;
extern Global57f6c8 DAT_0057f6c8;

/* Returns the signed byte at 0x3 of the global at 0x57F6C8. */
s32 FUN_00213d0c(void)
{
    return DAT_0057f6c8.value;
}

} /* extern "C" */
