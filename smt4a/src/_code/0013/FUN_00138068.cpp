#include "common.h"

extern "C" {

typedef struct TitleFlags {
    /* 0 */ s8 first;
    /* 1 */ s8 second;
} TitleFlags;

extern TitleFlags g_titleFlags;
extern u32 g_renderCtx;

extern s32 FUN_001696f4(void);
extern s32 asdProcessSetCommandListRecording(s32 arg);
extern s32 FUN_001575cc(u32 scene);
extern u32 FUN_00152f54(void);
extern s32 FUN_00145e24(u32 scene, u32 value);

/* Per-frame hook: opens the pending screen once both flags allow it, then passes the scene the pending value, if any; always returns 0. */
u32 FUN_00138068(void)
{
    if (g_titleFlags.first == 0 && FUN_001696f4() == 1 && g_titleFlags.second != 0) {
        asdProcessSetCommandListRecording(0);
    }
    FUN_001575cc(g_renderCtx);
    if (FUN_00152f54() != 0) {
        FUN_00145e24(g_renderCtx, FUN_00152f54());
    }
    return 0;
}

}
