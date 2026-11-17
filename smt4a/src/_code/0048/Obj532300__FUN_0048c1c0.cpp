/* NON_MATCHING: armcc keeps g_gameState's address in r8 across the switch; retail reloads it from the pool at every use (r8 saved but unused), which also changes later constant scheduling. */
#include "ui/UiSpriteApi.h"
#include "ui/NaviCategorySelection.h"
#include "game/GameStateA.h"
#include "ui/ButtonHelp.h"
#include "map/mapDepart.h"
#include "test/BustupViewer.h"

static __inline void flagsSetBits(u32 *flags, u32 mask)
{
    *flags |= mask;
}

static __inline void flagsClearBits(u32 *flags, u32 mask)
{
    *flags &= mask;
}

struct NaviCategoryTransitionView {
    u8 unk0000[8];
    u32 state;
    u32 unk0C;
    u32 flags;
    u8 unk0014[0x4BC];
    f32 position[2];
    u8 unk04D8[0xC];
    UiSpriteState bank;
    u8 unk0570[0x20];
    UiSpriteState cursor;
    u8 unk061C[0x624];
    UiSpriteState entries[6];
    u8 unk0F88[0x118];
    UiSpriteState lower;
    UiSpriteState upper;
};
typedef char NaviCategoryTransitionOffsets[
    offsetof(NaviCategoryTransitionView, flags) == 0x10 && offsetof(NaviCategoryTransitionView, position) == 0x4D0 &&
    offsetof(NaviCategoryTransitionView, bank) == 0x4E4 && offsetof(NaviCategoryTransitionView, cursor) == 0x590 &&
    offsetof(NaviCategoryTransitionView, entries) == 0xC40 && offsetof(NaviCategoryTransitionView, lower) == 0x10A0 &&
    offsetof(NaviCategoryTransitionView, upper) == 0x112C ? 1 : -1];

extern "C" {
void uiSpriteBankApplyPreset(UiSpriteState *unit, u32 preset);
void FUN_00168980(u32 sound);
void msgWindowReset(void);
void sub68OwnerDestroy(void);
void pointConvertToFloat(f32 *point, s32 x, s32 y);

// Animate category confirmation, commit its selection/refresh requests, and release the temporary panel when closed.
void _ZN9Obj53230012FUN_0048c1c0Ev(NaviCategorySelectionWork *work)
{
    switch (((NaviCategoryTransitionView *)work)->state) {
    case 0:
        uiSpriteBankApplyPreset(&((NaviCategoryTransitionView *)work)->bank, 1);
        if (!g_gameState.menuOpen)
            FUN_00168980(27);
        g_gameState.unk463 = 1;
        flagsSetBits(&((NaviCategoryTransitionView *)work)->flags, 0x01000008);
        ((NaviCategoryTransitionView *)work)->state = 1;
        return;
    case 1: {
        for (s32 index = 0; index < 6; ++index)
            uiSpriteAdvanceAnimation(&((NaviCategoryTransitionView *)work)->entries[index], 1.0f);
        uiSpriteAdvanceAnimation(&((NaviCategoryTransitionView *)work)->upper, 1.0f);
        uiSpriteAdvanceAnimation(&((NaviCategoryTransitionView *)work)->lower, 1.0f);
        UiSpriteState *cursor = &((NaviCategoryTransitionView *)work)->cursor;
        if (uiSpriteAdvanceAnimation(cursor, 1.0f) && buttonHelpStateIsNot3()) {
            work->selection = work->selectedIcon;
            work->refresh[0] = 1;
            work->refresh[1] = 1;
            work->discovered = 1;
            work->unk07B93[0] = 1;
            g_gameState.paused = 0;
            g_gameState.alternateNaviMap = 0;
            g_gameState.unk463 = 0;
            g_gameState.naviMapPending = 0;
            ((NaviCategoryTransitionView *)work)->state = 2;
            flagsSetBits(&((NaviCategoryTransitionView *)work)->flags, 2);
            msgWindowReset();
        }
        s32 y = vec2GetYInt(cursor);
        s32 x = vec2GetXInt(cursor);
        pointConvertToFloat(((NaviCategoryTransitionView *)work)->position, x, y);
        return;
    }
    case 2:
        if (g_gameState.unk461) {
            flagsClearBits(&((NaviCategoryTransitionView *)work)->flags, ~8u);
            sub68OwnerDestroy();
            g_gameState.unk461 = 0;
        }
        flagsClearBits(&((NaviCategoryTransitionView *)work)->flags, ~8u);
        return;
    default:
        return;
    }
}
}
