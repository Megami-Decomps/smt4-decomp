#include "common.h"

extern "C" {

typedef struct Global57f6c8 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 value;
} Global57f6c8;
extern Global57f6c8 g_saveLoadThread;

/* Returns whether the word at 0x8 of the global at 0x57F6C8 is 0. */
u8 FUN_002a6464(void)
{
    return g_saveLoadThread.value == 0;
}

} /* extern "C" */
