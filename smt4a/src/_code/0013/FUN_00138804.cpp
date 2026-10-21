#include "common.h"

extern "C" {

typedef struct TitleFlags {
    /* 0x0 */ s8 first;
    /* 0x1 */ s8 second;
} TitleFlags;

extern TitleFlags g_titleFlags;
extern u32 g_renderCtx;

s32 asdProcessSetCommandListRecording(s32 arg);
s32 holderClearPair(u32 scene);
s32 FUN_001696f4(void);

/* Runs the title scene update, first starting asdProcessSetCommandListRecording when the flags and FUN_001696f4 allow it; always returns 0. */
u32 FUN_00138804(void)
{
    if (g_titleFlags.first == 0 && FUN_001696f4() == 1 && g_titleFlags.second != 0) {
        asdProcessSetCommandListRecording(1);
    }
    holderClearPair(g_renderCtx);
    return 0;
}

} /* extern "C" */
