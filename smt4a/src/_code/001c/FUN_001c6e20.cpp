#include "common.h"

extern "C" {

typedef struct Global589284 {
    /* 0x00 */ s8 unk00;
    /* 0x01 */ s8 enabled;
} Global589284;
extern Global589284 DAT_00589284;

/* Returns the signed byte at 0x1 of the global at 0x589284. */
s32 FUN_001c6e20(void)
{
    return DAT_00589284.enabled;
}

} /* extern "C" */
