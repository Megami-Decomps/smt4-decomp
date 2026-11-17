#include "common.h"
#include "code/Code0015.h"
#include "camp/RenderCtxA.h"

extern "C" {

typedef struct TitleDraw {
    /* 0x00 */ s8 hidden;
    /* 0x01 */ s8 enabled;
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ u32 commandList;
} TitleDraw;

extern TitleDraw g_titleFlags;

extern void effectRestoreSavedRenderPairs(RenderCtxA *scene, u32 arg);
extern s32 gxIsStereoscopic3dEnabled(void);
extern void asdGxCommandListBegin(u32 commandList);

/* Per-frame title step: forwards asdCameraGetSavedRenderPairs's value to the scene and begins the draw command list when enabled; returns 0. */
u32 titlePrepareDrawFrame(void)
{
    if (asdCameraGetSavedRenderPairs() != 0) {
        effectRestoreSavedRenderPairs(g_renderCtx, asdCameraGetSavedRenderPairs());
    }
    if (g_titleFlags.hidden == 0 && g_titleFlags.enabled != 0 && gxIsStereoscopic3dEnabled() == 1) {
        asdGxCommandListBegin(g_titleFlags.commandList);
    }
    return 0;
}

} /* extern "C" */
