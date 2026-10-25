/* NON_MATCHING: render-stack pop uses exchanged state registers; zero setup and early returns differ. */
/* Draws the active battle-effect overlay with a temporary title-scene render state. */
#include "battle/btlEffect.h"
#include "camp/RenderCtx.h"
#include "shard/JobWork.h"
#include "util/CalleeContracts.h"

extern "C" {
extern BtlEffectGlobals g_btlEffect;
extern RenderCtx *g_titleScene;
void FUN_002c198c(RenderCtx *context);
void FUN_002c18e4(RenderCtx *context);

u32 FUN_0020ee0c(u32 process)
{
    struct DrawObject;
    struct DrawMethods {
        void *unk00[3];
        void (*draw)(DrawObject *object);
    };
    struct DrawObject { DrawMethods *methods; };
    struct EffectOverlayView {
        u8 unk0000[0x3028];
        u32 flags;
        u8 unk302C[8];
        DrawObject *object;
    };
    jobGetWork(process);
    EffectOverlayView *effect = (EffectOverlayView *)g_btlEffect.data;
    if (effect != NULL && (effect->flags & 2) && effect->object != NULL) {
        renderCtxPushC(g_titleScene, FUN_002865c0(6, 0.0f));
        effect->object->methods->draw(effect->object);
        renderStackPop(&g_titleScene->additional.stackC);
        FUN_002c198c(g_titleScene);
        FUN_002c18e4(g_titleScene);
    }
    return 0;
}
}
