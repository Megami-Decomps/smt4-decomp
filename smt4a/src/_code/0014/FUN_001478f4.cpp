#include "common.h"

extern "C" {

typedef struct Global5891d8 {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 unk05;
} Global5891d8;
extern Global5891d8 g_nnAppletState;

/* Returns the byte at 0x5 of the global at 0x5891D8. */
u8 FUN_001478f4(void)
{
    return g_nnAppletState.unk05;
}

} /* extern "C" */
