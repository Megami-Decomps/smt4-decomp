#include "common.h"

extern "C" {

typedef struct Global62e688 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 state;
} Global62e688;
extern Global62e688 DAT_0062e688;

/* Returns whether the word at 0x10 of the global at 0x62E688 is 1. */
u8 FUN_002ee9e4(void)
{
    return DAT_0062e688.state == 1;
}

} /* extern "C" */
