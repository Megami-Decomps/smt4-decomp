#include "common.h"

extern "C" {

typedef struct TitleFlags {
    /* 0x0 */ s8 first;
    /* 0x1 */ s8 second;
} TitleFlags;

extern TitleFlags g_titleFlags;
extern u32 g_titleScene;

s32 asdProcessSetCommandListRecording(s32 arg);
s32 objResetCounters(u32 scene);
s32 FUN_002c5210(void);

/* Runs the title scene update, first starting asdProcessSetCommandListRecording when the flags and FUN_002c5210 allow it; always returns 0. */
u32 FUN_00103d8c(void)
{
    if (g_titleFlags.first == 0 && FUN_002c5210() == 1 && g_titleFlags.second != 0) {
        asdProcessSetCommandListRecording(1);
    }
    objResetCounters(g_titleScene);
    return 0;
}

} /* extern "C" */
