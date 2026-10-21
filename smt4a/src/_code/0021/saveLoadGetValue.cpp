#include "common.h"

extern "C" {

typedef struct Global57f6c8 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s8 value;
} Global57f6c8;
extern Global57f6c8 g_saveLoadThread;

/* Returns the signed byte at 0x4 of the global at 0x57F6C8. */
s32 saveLoadGetValue(void)
{
    return g_saveLoadThread.value;
}

} /* extern "C" */
