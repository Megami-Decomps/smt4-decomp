#include "shard/W5_W5Match7_SceneState.h"
#include "test/BustupViewer.h"

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

s32 FUN_00163aa4(void *sprite, f32 rate);
s32 vec2GetXInt(void *sprite);
s32 vec2GetYInt(void *sprite);
void pointConvertToFloat(void *point, s32 x, s32 y);
void uiSpriteBankApplyPreset(void *bank, s32 preset);
void FUN_00168980(s32 sound);

/* Shows the view (state 0 -> 1), then follows its cursor until it settles (state 1 -> 2). */
void _ZN9Obj53230012FUN_0048d358Ev(PresetCursorView *view)
{
    switch (view->state) {
    case 0:
        uiSpriteBankApplyPreset(view->sprites, 1);
        if (g_gameState.mapFlags.unk295 == 0) {
            FUN_00168980(0x1b);
        }
        view->flags |= 0x1000000;
        view->state = 1;
        break;
    case 1: {
        void *cursor = view->cursor;
        if (FUN_00163aa4(cursor, 1.0f) && FUN_002e19f8()) {
            view->state = 2;
            view->flags |= 2;
        }
        pointConvertToFloat(view->position, vec2GetXInt(cursor), vec2GetYInt(cursor));
        break;
    }
    }
}

} /* extern "C" */
