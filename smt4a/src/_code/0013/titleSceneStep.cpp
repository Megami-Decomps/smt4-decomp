#include "common.h"
#include "code/Code0015.h"

extern "C" {

typedef struct TitleState0013705c {
    /* 0x00 */ s8 skipped;
    /* 0x01 */ s8 ready;
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ u32 sceneArg;
} TitleState0013705c;

s32 FUN_001696f4(void);
void effectRestoreSavedRenderPairs(u32 scene, s32 arg);
void FUN_00167eb0(u32 arg);

extern TitleState0013705c g_titleFlags; /* 0x57ffd0 */
extern u32 g_renderCtx; /* 0x59dbb4 */

/* Title scene step: when FUN_001696f4 reports 1 and the title is ready, forwards the pending value and starts the scene unless skipped. */
u32 titleSceneStep(void)
{
    if (FUN_001696f4() == 1 && g_titleFlags.ready != 0) {
        if (FUN_00152f54() != 0) {
            effectRestoreSavedRenderPairs(g_renderCtx, FUN_00152f54());
        }
        if (g_titleFlags.skipped == 0) {
            FUN_00167eb0(g_titleFlags.sceneArg);
        }
    }
    return 0;
}

} /* extern "C" */
