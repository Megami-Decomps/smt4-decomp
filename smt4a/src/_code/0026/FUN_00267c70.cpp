#include "common.h"
#include "ui/UiSpriteApi.h"
#include "shard/X14_EngineUnits.h"

extern "C" {
s32 scriptProcessCreateWhenReady(ResultWorkA *view);
void FUN_004b2e50(ResultWorkA *view, s32 a, s32 b);
void FUN_004b4f9c(ResultWorkA *view, s32 x, s32 y);
void FUN_004b40f4(ResultWorkA *view, s32 x, s32 y);
void FUN_004b1a00(ResultWorkA *view, s32 x, s32 y);

// Re-apply the cursor position of the engine object's current mode (11, 18 or 19).
u32 FUN_00267c70(void)
{
    ResultWorkA *view = g_engineCleanupOwner.instance;
    if (view == NULL) {
        return 0;
    }
    if (!scriptProcessCreateWhenReady(view)) {
        return 0;
    }
    if (view->state <= 8 && view->state != 0) {
        FUN_004b2e50(view, 0, 0);
    }
    switch (view->state) {
    case 11: {
        s32 x = vec2GetXInt(&view->gridCursor);
        s32 y = vec2GetYInt(&view->gridCursor);
        FUN_004b4f9c(view, x, y);
        break;
    }
    case 19: {
        s32 x = vec2GetXInt(&view->pageCursor);
        s32 y = vec2GetYInt(&view->pageCursor);
        FUN_004b40f4(view, x, y);
        break;
    }
    case 18: {
        s32 x = vec2GetXInt(&view->listSprites[0]);
        s32 y = vec2GetYInt(&view->listSprites[0]);
        FUN_004b1a00(view, x, y);
        break;
    }
    }
    return 0;
}

} /* extern "C" */
