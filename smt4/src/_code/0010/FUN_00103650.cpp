#include "title/titleMain.h"
#include "shard/W6_W6Match2_TitleCommand.h"

extern "C" {

extern TitleScene *g_titleScene;

extern s32 FUN_002c5210(void);
extern s32 asdProcessSetCommandListRecording(s32 arg);
extern s32 FUN_002c3a14(TitleScene *scene);
extern u32 FUN_002c501c(void);
extern s32 effectRestoreSavedRenderPairs(TitleScene *scene, u32 value);

/* Per-frame hook: opens the pending screen once both flags allow it, then passes the scene the pending value, if any; always returns 0. */
u32 FUN_00103650(void)
{
    if (g_titleFlags.disabled == 0 && FUN_002c5210() == 1 && g_titleFlags.commandActive != 0) {
        asdProcessSetCommandListRecording(0);
    }
    FUN_002c3a14(g_titleScene);
    if (FUN_002c501c() != 0) {
        effectRestoreSavedRenderPairs(g_titleScene, FUN_002c501c());
    }
    return 0;
}

}
