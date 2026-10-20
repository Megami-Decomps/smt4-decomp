#include "common.h"

extern "C" {

typedef struct Global57f6c8 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 value;
} Global57f6c8;
extern Global57f6c8 DAT_0057f6c8;

/* Stores `value` in the byte at 0x4 of the global at 0x57F6C8. */
void FUN_00229fc0(u8 value)
{
    DAT_0057f6c8.value = value;
}

} /* extern "C" */
