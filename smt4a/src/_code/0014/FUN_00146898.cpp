#include "common.h"

extern "C" {

typedef struct Global5c0ac8 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 unk08;
} Global5c0ac8;
extern Global5c0ac8 g_nnosHeapState;

/* Returns the word at 0x8 of the global at 0x5C0AC8. */
u32 FUN_00146898(void)
{
    return g_nnosHeapState.unk08;
}

} /* extern "C" */
