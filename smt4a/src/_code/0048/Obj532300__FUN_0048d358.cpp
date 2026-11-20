#include "shard/W5_W5Match7_SceneState.h"
#include "game/GameStateA.h"
#include "test/BustupViewer.h"
#include "ui/UiSpriteApi.h"

extern "C" {

typedef struct PresetCursorView {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ s32 state;
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ u32 flags;
    /* 0x014 */ u8 unk014[0x4BC];
    /* 0x4D0 */ u8 position[0x14];
    /* 0x4E4 */ u8 sprites[0xAC];
    /* 0x590 */ u8 cursor[0x8C];
} PresetCursorView;

void pointConvertToFloat(void *point, s32 x, s32 y);
void uiSpriteBankApplyPreset(void *bank, s32 preset);
void buttonHelpTransitionPresetFlags(s32 sound);

/* Shows the view (state 0 -> 1), then follows its cursor until it settles (state 1 -> 2). */
void _ZN9Obj53230012FUN_0048d358Ev(PresetCursorView *view)
{
    switch (view->state) {
    case 0:
        uiSpriteBankApplyPreset(view->sprites, 1);
        if (g_gameState.menuOpen == 0) {
            buttonHelpTransitionPresetFlags(0x1b);
        }
        view->flags |= 0x1000000;
        view->state = 1;
        break;
    case 1: {
        void *cursor = view->cursor;
        if (uiSpriteAdvanceAnimation((UiSpriteState *)cursor, 1.0f) && buttonHelpStateIsNot3()) {
            view->state = 2;
            view->flags |= 2;
        }
        pointConvertToFloat(view->position, vec2GetXInt((const UiSpriteState *)cursor), vec2GetYInt((const UiSpriteState *)cursor));
        break;
    }
    }
}

} /* extern "C" */
