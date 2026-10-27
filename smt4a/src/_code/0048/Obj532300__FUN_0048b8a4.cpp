/* NON_MATCHING: same 100 rows and instruction order as retail now (flag bits through set/clear helpers); only the saved registers differ (retail r5=0, r6=sprite base, r7=2; ours r7=0, r5=base, r6=2). */
#include "shard/W6_W6Match7_NumericStepper.h"
#include "shard/NaviMain_GetCurrentMap.h"
#include "ui/NaviCategorySelection.h"
#include "ui/UiSpriteState.h"
#include "shard/W5_W5Match2_ScalarArguments.h"
#include "map/lmapMain.h"

static __inline void flagsSetBits(u32 *flags, u32 bits)
{
    *flags |= bits;
}

static __inline void flagsClearBits(u32 *flags, u32 bits)
{
    *flags &= ~bits;
}

extern "C" {
s32 FUN_00163aa4(UiSpriteState *, f32);
void uiSpriteBankApplyPreset(void *, s32);
void FUN_0048a378(NaviCategorySelectionWork *);
void FUN_0048821c(NaviCategorySelectionWork *, u32);
s32 vec2GetXInt(UiSpriteState *);
s32 vec2GetYInt(UiSpriteState *);
void pointConvertToFloat(FloatPoint *, s32, s32);
void naviMainSetCurrentMap(void *, u32);
s8 uiSpriteGetCompletionState(const UiSpriteState *sprite);

void _ZN9Obj53230012FUN_0048b8a4Ev(NaviCategorySelectionWork *owner)
{
    /* The shared opaque range starts at 0x65; a typed union there would shift alignment. */
    struct SceneView { u32 map; FloatPoint position; u8 unk0C[0xC]; };
    struct EntranceView {
        u32 job;
        s32 state;
        s32 phase;
        u32 unk0C;
        u32 flags;
        u32 timer;
        u8 unk018[0x4B4];
        SceneView scene;
        u8 preset[0x20];
        UiSpriteState motion;
        u8 unk590[0xB10];
        UiSpriteState auxiliary;
    };
    typedef char EntranceViewOffsets[
        offsetof(EntranceView, scene) == 0x4CC &&
        offsetof(EntranceView, scene.position) == 0x4D0 &&
        offsetof(EntranceView, motion) == 0x504 &&
        offsetof(EntranceView, auxiliary) == 0x10A0 ? 1 : -1];
    EntranceView *work = (EntranceView *)owner;
    switch (work->phase) {
    case 0: {
        pointConvertToFloat(&work->scene.position, -320, 0);
        FUN_0048a378(owner);
        uiSpriteBankApplyPreset(work->preset, 0);
        flagsClearBits(&work->flags, 2);
        flagsSetBits(&work->flags, 0x1000000);
        work->phase = 1;
        work->timer = 0;
        if (NaviMain_GetCurrentMap(reinterpret_cast<int>(&work->scene)) != naviGetActiveStateValue(&work->scene)) {
            u32 map = naviGetActiveStateValue(&work->scene);
            naviMainSetCurrentMap(&work->scene, map);
            FUN_00492ac8(reinterpret_cast<u32>(&work->scene), 0);
            FUN_0048821c(owner, map);
        }
        return;
    }
    case 1: {
        if (FUN_00163aa4(&work->motion, 1.0f))
            work->phase = 2;
        s32 y = vec2GetYInt(&work->motion);
        s32 x = vec2GetXInt(&work->motion);
        pointConvertToFloat(&work->scene.position, x, y);
        if (!uiSpriteGetCompletionState(&work->auxiliary))
            FUN_00163aa4(&work->auxiliary, 1.0f);
        return;
    }
    case 2:
        if (!uiSpriteGetCompletionState(&work->auxiliary))
            FUN_00163aa4(&work->auxiliary, 1.0f);
        work->state = 2;
        work->phase = 0;
        work->flags &= ~0x1000000;
        return;
    }
}
}
