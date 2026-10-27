/* NON_MATCHING: signed completion getter, sprite bank and shared script-run tail recovered; state-store registers and inlined receiver copy differ. */
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "shard/Shard0049.h"
#include "shard/W6_W6Match6_SpritePresetBank.h"
#include "ui/UiSpriteState.h"
#include "event/2dEvent/SmokeFade.h"

struct EquipmentMenuScriptViewA {
    u8 unk000[0x184];
    void *table;
    u8 unk188[4];
    void *process;
};
struct EquipmentMenuAnimationViewA {
    u8 prefix[0x3CC];
    SpritePresetBank bank;
};
typedef char EquipmentMenuAnimationOffsetCheck[
    offsetof(EquipmentMenuAnimationViewA, bank) == 0x3CC ? 1 : -1];
extern "C" {
extern u32 g_handleRegistry;
void FUN_0038b010(u8 value);
void uiSpriteBankApplyPreset(SpritePresetBank *, u32);
void FUN_00167458(UiSpriteState *, s32);
s32 vec2GetXInt(const UiSpriteState *);
s32 vec2GetYInt(const UiSpriteState *);
void pointConvertToFloat(AsdTextureRegion *, s32, s32);
u32 tableGroupFindEntryIndex(void *, const char *);
void scrScriptProcessStartEntry(void *, u32);
void scrRunOpcodesStub(void *);
s32 FUN_0040ab8c();
void FUN_0040aad4(EquipmentMenuResource *, s32);
void handleRegistryRegisterObject(u32, u32);
void FUN_003fd7b4(u32, f32, f32, f32);

static __inline void equipmentMenuFinishPageTransition(EquipmentMenuState *work)
{
    EquipmentMenuScriptViewA *script = reinterpret_cast<EquipmentMenuScriptViewA *>(work);
    switch (work->page) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6:
        if (FUN_0023b3d0()) {
            work->transition.previousState = work->transition.state;
            work->transition.state = 7;
            work->transition.frame = 0;
        }
        return;
    case 7:
        work->transition.previousState = work->transition.state;
        work->transition.state = 8;
        work->transition.frame = 0;
        scrScriptProcessStartEntry(script->process, tableGroupFindEntryIndex(script->table, "shop_itembuy"));
        break;
    case 8:
        work->transition.previousState = work->transition.state;
        work->transition.state = 9;
        work->transition.frame = 0;
        scrScriptProcessStartEntry(script->process, tableGroupFindEntryIndex(script->table, "shop_selloff"));
        break;
    default:
        return;
    }
    scrRunOpcodesStub(script->process);
}

void _ZN9Obj53604412FUN_00494740Ev(EquipmentMenuState *work)
{
    if (work->transition.frame == 0) {
        FUN_0038b010(1);
        EquipmentMenuAnimationViewA *animation = reinterpret_cast<EquipmentMenuAnimationViewA *>(work);
        uiSpriteBankApplyPreset(&animation->bank, 0);
        work->transition.frame = 1;
    } else if (work->transition.frame == 1) {
        EquipmentMenuAnimationViewA *animation = reinterpret_cast<EquipmentMenuAnimationViewA *>(work);
        UiSpriteState *sprite = reinterpret_cast<UiSpriteState *>(&animation->bank.sprites[0]);
        FUN_00167458(sprite, 0);
        s32 y = vec2GetYInt(sprite);
        s32 x = vec2GetXInt(sprite);
        pointConvertToFloat(&work->detail.region, x, y);
        if (uiSpriteGetCompletionState((const UiAnimatedSprite *)sprite)) {
            equipmentMenuFinishPageTransition(work);
        }
    }
    if (work->resource && FUN_0040ab8c() && work->resource->handle == 0) {
        FUN_0040aad4(work->resource, 0);
        u32 handle = work->resource->handle;
        handleRegistryRegisterObject(g_handleRegistry, handle);
        FUN_003fd7b4(handle, 0.0f, -32000.0f, 0.0f);
    }
}
}
