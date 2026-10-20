#include "common.h"

extern "C" {

s32 rt_malloc(s32 size);

typedef struct FlagBlockView {
    /* 0x00 */ u8 unk00[0x6C];
    /* 0x6C */ void (*allocHook)(s32 size);
} FlagBlockView;
extern FlagBlockView g_flagBlock;

/* Runs the installed allocation hook for `size`, or rt_malloc when there is none. */
void FUN_001149f0(s32 size)
{
    if (g_flagBlock.allocHook != NULL) {
        g_flagBlock.allocHook(size);
        return;
    }
    rt_malloc(size);
}

} /* extern "C" */
