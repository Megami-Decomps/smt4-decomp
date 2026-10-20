#include "common.h"

extern "C" {

typedef struct TitleFlags {
    /* 0 */ s8 first;
    /* 1 */ s8 second;
} TitleFlags;

extern TitleFlags g_titleFlags;
extern u32 g_titleScene;

extern s32 FUN_002c5210(void);
extern s32 asdProcessSetCommandListRecording(s32 arg);
extern s32 FUN_002c3a14(u32 scene);
extern u32 FUN_002c501c(void);
extern s32 FUN_002c4f8c(u32 scene, u32 value);

/* Per-frame hook: opens the pending screen once both flags allow it, then passes the scene the pending value, if any; always returns 0. */
u32 FUN_00103650(void)
{
    if (g_titleFlags.first == 0 && FUN_002c5210() == 1 && g_titleFlags.second != 0) {
        asdProcessSetCommandListRecording(0);
    }
    FUN_002c3a14(g_titleScene);
    if (FUN_002c501c() != 0) {
        FUN_002c4f8c(g_titleScene, FUN_002c501c());
    }
    return 0;
}

}
