/* NON_MATCHING: retail loads 1.0f into s16 once and keeps r7/r8 for the constants 1/2, and lays the close step (step 2) out of line after the opening step; ours schedules the step-2 tail inline (147 rows against 150). */
#include "common.h"
#include "map/lmapMain.h"
#include "shard/FUN_00492c84.h"

#define NAVI_FLAG_SLIDE_DONE 0x02000000
#define NAVI_FLAG_CLOSING 0x01000000
#define NAVI_FLAG_ENTERING 0x00000002

#define NAVI_SLOT_COUNT 6

/* The title frame sprite: a sprite whose hidden flag lives at +0x8A. */
struct NaviFrameSprite {
    /* 0x00 */ u8 unk00[0x8A];
    /* 0x8A */ s8 hidden;
    /* 0x8B */ u8 unk8B[1];
};

/* The navi menu (observed fields). Sprites and sub-objects are at the offsets noted. */
struct NaviMenu {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ s32 mode;
    /* 0x008 */ s32 step;
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ u32 flags;
    /* 0x014 */ u32 counter;
    /* 0x018 */ u8 unk018[0x4B4];
    /* 0x4CC */ u8 mapState[4];
    /* 0x4D0 */ u8 cursorPoint[0x14];
    /* 0x4E4 */ u8 titleBank[0x20];
    /* 0x504 */ u8 titleSprite[0x73C];
    /* 0xC40 */ u8 slotSprites[NAVI_SLOT_COUNT][0x8C];
    /* 0xF88 */ u8 unkF88[0x118];
    /* 0x10A0 */ NaviFrameSprite frameSprite;
    /* 0x112C */ u8 backSprite[0x8C];
    /* 0x11B8 */ u8 imageSpriteA[0x8C];
    /* 0x1244 */ u8 imageSpriteB[0x8C];
};

/* The game-state fields the navi menu touches. */
struct NaviGameFlags {
    /* 0x000 */ u8 unk000[0x460];
    /* 0x460 */ s8 forceMapReload;
    /* 0x461 */ u8 unk461;
    /* 0x462 */ u8 naviOpen;
};

extern "C" {

extern NaviGameFlags g_gameState;

s32 FUN_00163aa4(void *sprite, f32 delta);
void uiSpriteBankApplyPreset(void *bank, s32 preset);
void uiSpriteSetKeyframe(void *sprite, s32 keyframe, s32 restart);
void uiSpriteSetImageKeyframe(void *sprite, s32 keyframe, s32 restart);
void FUN_002d22c0(s32 value);
void FUN_0048821c(NaviMenu *menu, u32 map);
void FUN_0048a378(NaviMenu *menu);
void FUN_0048d248(NaviMenu *menu, u32 value);
void naviMainSetCurrentMap(void *state, u32 map);
u32 naviMainGetRequestedMap(void *state);
s32 NaviMain_GetCurrentMap(void);
s32 vec2GetXInt(const void *vector);
s32 vec2GetYInt(const void *vector);
void pointConvertToFloat(void *point, s32 x, s32 y);

/* Steps the navi menu's open animation: step 0 sets everything up, step 1 plays it until the title
 * slides in, step 2 closes it. */
void FUN_0048bad0(NaviMenu *menu)
{
    s32 i;

    if (menu->step == 0) {
        pointConvertToFloat(menu->cursorPoint, -320, 0);
        FUN_0048a378(menu);
        uiSpriteBankApplyPreset(menu->titleBank, 0);
        menu->step = 1;
        menu->flags = (menu->flags & ~NAVI_FLAG_ENTERING) | NAVI_FLAG_CLOSING;
        menu->counter = 0;
        void *mapState = menu->mapState;

        if (NaviMain_GetCurrentMap() != (s32)naviMainGetRequestedMap(menu->mapState) || g_gameState.forceMapReload != 0) {
            u32 map = naviMainGetRequestedMap(menu->mapState);

            naviMainSetCurrentMap(menu->mapState, map);
            FUN_00492ac8(reinterpret_cast<u32>(menu->mapState), 0);
            FUN_0048821c(menu, map);
        }
        FUN_0048d248(menu, FUN_00492c84(menu->mapState));
        uiSpriteSetImageKeyframe(menu->imageSpriteA, 3, 0);
        uiSpriteSetImageKeyframe(menu->imageSpriteB, 5, 0);
        FUN_0048a378(menu);
        for (i = 0; i < NAVI_SLOT_COUNT; i++) {
            uiSpriteSetKeyframe(menu->slotSprites[i], 4, 0);
        }
    } else if (menu->step == 1) {
        if (FUN_00163aa4(menu->titleSprite, 1.0f) != 0) {
            menu->flags &= ~NAVI_FLAG_SLIDE_DONE;
            FUN_002d22c0(1);
            g_gameState.naviOpen = 1;
            menu->step = 2;
        }
        pointConvertToFloat(menu->cursorPoint, vec2GetXInt(menu->titleSprite), vec2GetYInt(menu->titleSprite));
        for (i = 0; i < NAVI_SLOT_COUNT; i++) {
            FUN_00163aa4(menu->slotSprites[i], 1.0f);
        }
        FUN_00163aa4(menu->backSprite, 1.0f);
        FUN_00163aa4(&menu->frameSprite, 1.0f);
    } else if (menu->step == 2) {
        if (menu->frameSprite.hidden == 0) {
            FUN_00163aa4(&menu->frameSprite, 1.0f);
        }
        menu->mode = 2;
        menu->step = 0;
        menu->flags &= ~NAVI_FLAG_CLOSING;
    }
}

} /* extern "C" */
