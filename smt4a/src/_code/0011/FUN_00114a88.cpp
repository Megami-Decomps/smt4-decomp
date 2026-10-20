#include "common.h"

extern "C" {

void rt_malloc(void);

typedef struct FlagBlockView {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ void (*hook)(s32 arg);
} FlagBlockView;
extern FlagBlockView g_flagBlock;

/* Runs the installed hook with `arg`, or rt_malloc when there is none. */
void FUN_00114a88(s32 arg)
{
    if (g_flagBlock.hook != NULL) {
        g_flagBlock.hook(arg);
        return;
    }
    rt_malloc();
}

} /* extern "C" */
