#include "common.h"

extern "C" {

typedef struct Global57ffd0 {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 unk18;
} Global57ffd0;
extern Global57ffd0 g_titleFlags;

/* Returns the word at 0x18 of the global at 0x57FFD0. */
u32 FUN_0029202c(void)
{
    return g_titleFlags.unk18;
}

} /* extern "C" */
