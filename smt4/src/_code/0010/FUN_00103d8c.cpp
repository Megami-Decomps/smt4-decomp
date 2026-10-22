#include "title/titleMain.h"
#include "shard/W6_W6Match2_TitleCommand.h"

extern "C" {

extern TitleScene *g_titleScene;

s32 asdProcessSetCommandListRecording(s32 arg);
s32 objResetCounters(TitleScene *scene);
s32 FUN_002c5210(void);

/* Runs the title scene update, first starting asdProcessSetCommandListRecording when the flags and FUN_002c5210 allow it; always returns 0. */
u32 FUN_00103d8c(void)
{
    if (g_titleFlags.disabled == 0 && FUN_002c5210() == 1 && g_titleFlags.commandActive != 0) {
        asdProcessSetCommandListRecording(1);
    }
    objResetCounters(g_titleScene);
    return 0;
}

} /* extern "C" */
