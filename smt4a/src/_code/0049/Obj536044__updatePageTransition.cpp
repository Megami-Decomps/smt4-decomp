/* NON_MATCHING: same 128 rows as retail; the state-change stores (ldr/add/stm) use r2/r3 where retail uses r1/r2 and the stm is scheduled before the previous-state str. */
#include "classes/Obj536044.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "shard/Shard0049.h"
#include "shard/W6_W6Match6_SpritePresetBank.h"
#include "ui/UiSpriteApi.h"
#include "event/2dEvent/SmokeFade.h"
#include "Model/MoriModelManager.h"
#include "gfx/ControllerModel.h"

/* The scene with its page-transition step. */
struct ShopMenuView : public Obj536044 {
    void finishPageTransition();
};

extern "C" {
void FUN_0038b010(u8 value);
void uiSpriteBankApplyPreset(SpritePresetBank *, u32);
void pointConvertToFloat(f32 *, s32, s32);
u32 tableGroupFindEntryIndex(u32, const char *);
void scrScriptProcessStartEntry(void *, u32);
void scrRunOpcodesStub(void *);
}

// Moves on from the page's open animation: the item pages wait for the fade, the buy and sell pages
// start their script entry.
inline void ShopMenuView::finishPageTransition()
{
    switch (slot) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6:
        if (gameStateIsNotTransitioning())
            changeState(7);
        return;
    case 7:
        changeState(8);
        scrScriptProcessStartEntry(controller, tableGroupFindEntryIndex(tableGroup, "shop_itembuy"));
        break;
    case 8:
        changeState(9);
        scrScriptProcessStartEntry(controller, tableGroupFindEntryIndex(tableGroup, "shop_selloff"));
        break;
    default:
        return;
    }
    scrRunOpcodesStub(controller);
}

void Obj536044::updatePageTransition()
{
    ShopMenuView *scene = static_cast<ShopMenuView *>(this);
    switch (scene->substate) {
    case 0:
        FUN_0038b010(1);
        uiSpriteBankApplyPreset(&scene->animation, 0);
        scene->substate = 1;
        break;
    case 1: {
        UiSpriteState *sprite = reinterpret_cast<UiSpriteState *>(&scene->animation.sprites[0]);
        uiSpriteSlideFromSide(sprite, 0);
        s32 y = vec2GetYInt(sprite);
        s32 x = vec2GetXInt(sprite);
        pointConvertToFloat(scene->cursorPosition, x, y);
        if (uiSpriteGetCompletionState(sprite)) {
            scene->finishPageTransition();
        }
        break;
    }
    }
    if (scene->resource && moriModelContentIsLoaded(scene->resource) && scene->resource->body == NULL) {
        moriModelContentLoadBody(scene->resource, 0);
        Obj557b18 *handle = scene->resource->body;
        handleRegistryRegisterObject(g_handleRegistry, handle);
        controllerSetPositionXyz(handle, 0.0f, -32000.0f, 0.0f);
    }
}
