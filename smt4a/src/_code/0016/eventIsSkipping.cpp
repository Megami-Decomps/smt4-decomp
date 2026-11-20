#include "common.h"

extern "C" {

typedef struct Global57f560 {
    /* 0x00 */ s8 value;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 marker;
} Global57f560;
extern Global57f560 g_messageFlags;

/* Returns the signed byte at 0x57F560 when the word at 0x57F564 is negative, otherwise 0. */
s32 eventIsSkipping(void)
{
    s32 result;

    if (g_messageFlags.marker < 0) {
        result = g_messageFlags.value;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
