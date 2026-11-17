#include "common.h"
#include "camp/RenderCtxTitle.h"

extern "C" {

typedef struct TitleState001027d4 {
    /* 0x00 */ s8 skipped;
    /* 0x01 */ s8 ready;
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ u32 sceneArg;
} TitleState001027d4;

s32 gxIsStereoscopic3dEnabled(void);
s32 asdCameraGetSavedRenderPairs(void);
void effectRestoreSavedRenderPairs(RenderCtx *scene, s32 arg);
void FUN_002c4e98(u32 arg);

extern TitleState001027d4 g_titleFlags; /* 0x446db0 */

/* Title scene step: when gxIsStereoscopic3dEnabled reports 1 and the title is ready, forwards the pending value and starts the scene unless skipped. */
u32 titleSceneStep(void)
{
    if (gxIsStereoscopic3dEnabled() == 1 && g_titleFlags.ready != 0) {
        if (asdCameraGetSavedRenderPairs() != 0) {
            effectRestoreSavedRenderPairs(g_titleScene, asdCameraGetSavedRenderPairs());
        }
        if (g_titleFlags.skipped == 0) {
            FUN_002c4e98(g_titleFlags.sceneArg);
        }
    }
    return 0;
}

} /* extern "C" */
