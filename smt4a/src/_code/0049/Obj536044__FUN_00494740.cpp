/* NON_MATCHING: same 128 rows as retail; the state-change stores (ldr/add/stm) use r2/r3 where retail uses r1/r2 and the stm is scheduled before the previous-state str. */
#include "classes/Obj536044.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "shard/Shard0049.h"
#include "shard/W6_W6Match6_SpritePresetBank.h"
#include "ui/UiSpriteState.h"
#include "event/2dEvent/SmokeFade.h"

/* The scene past the class prefix: the sprite animation, current page and loaded resource. */
struct ShopMenuView : public Obj536044 {
    u8 unk0190[0x210];
    /* 0x03A0 */ u32 color;
    /* 0x03A4 */ AsdTextureRegion region;
    /* 0x03C4 */ u8 unk03C4[8];
    /* 0x03CC */ SpritePresetBank bank;
    /* 0x0B08 */ u8 unk0B08[0x38];
    /* 0x0B40 */ s32 page;
    /* 0x0B44 */ u8 unk0B44[0x154E4];
    /* 0x16028 */ EquipmentMenuResource *resource;
    void finishPageTransition();
};
typedef char ShopMenuViewOffsetCheck[
    offsetof(ShopMenuView, bank) == 0x3CC && offsetof(ShopMenuView, page) == 0xB40 &&
    offsetof(ShopMenuView, resource) == 0x16028 ? 1 : -1];

extern "C" {
extern u32 g_handleRegistry;
void FUN_0038b010(u8 value);
void uiSpriteBankApplyPreset(SpritePresetBank *, u32);
void FUN_00167458(UiSpriteState *, s32);
s32 vec2GetXInt(const UiSpriteState *);
s32 vec2GetYInt(const UiSpriteState *);
void pointConvertToFloat(AsdTextureRegion *, s32, s32);
u32 tableGroupFindEntryIndex(u32, const char *);
void scrScriptProcessStartEntry(void *, u32);
void scrRunOpcodesStub(void *);
s32 FUN_0040ab8c();
void FUN_0040aad4(EquipmentMenuResource *, s32);
void handleRegistryRegisterObject(u32, u32);
void FUN_003fd7b4(u32, f32, f32, f32);
}

// Moves on from the page's open animation: the item pages wait for the fade, the buy and sell pages
// start their script entry.
inline void ShopMenuView::finishPageTransition()
{
    switch (page) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6:
        if (FUN_0023b3d0())
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

void Obj536044::FUN_00494740()
{
    ShopMenuView *scene = static_cast<ShopMenuView *>(this);
    switch (scene->substate) {
    case 0:
        FUN_0038b010(1);
        uiSpriteBankApplyPreset(&scene->bank, 0);
        scene->substate = 1;
        break;
    case 1: {
        UiSpriteState *sprite = reinterpret_cast<UiSpriteState *>(&scene->bank.sprites[0]);
        FUN_00167458(sprite, 0);
        s32 y = vec2GetYInt(sprite);
        s32 x = vec2GetXInt(sprite);
        pointConvertToFloat(&scene->region, x, y);
        if (uiSpriteGetCompletionState((const UiAnimatedSprite *)sprite)) {
            scene->finishPageTransition();
        }
        break;
    }
    }
    if (scene->resource && FUN_0040ab8c() && scene->resource->handle == 0) {
        FUN_0040aad4(scene->resource, 0);
        u32 handle = scene->resource->handle;
        handleRegistryRegisterObject(g_handleRegistry, handle);
        FUN_003fd7b4(handle, 0.0f, -32000.0f, 0.0f);
    }
}
