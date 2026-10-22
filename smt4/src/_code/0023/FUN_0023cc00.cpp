/* NON_MATCHING: only the final zero-depth VFP literal load is scheduled before two argument moves. */
#include "battle/btlUI.h"
#include "gfx/SpriteTextureRect.h"

struct BattleUiDrawGlobals { u8 unk00[0x20]; BtlUi *ui; };
extern "C" {
extern BattleUiDrawGlobals g_btlUi;
void FUN_00289f18(BtlUiObjC *widget, u32 style, u32 kind, u32 value, u32 options, u32 enabled);
SpriteTextureRect *FUN_002bf4f8(u32 group, u32 id);
void FUN_0028a0d0(BtlUi *ui, u32 style, u32 value, u32 options, u32 color, u32 flags, f32 x, f32 y, f32 z);

// Draw a battle widget and align its value with the selected icon's dimensions.
void FUN_0023cc00(u32, u32 kind, u32 style, u32 value, u32 options, u32 color, s32 x, s32 y)
{
    BtlUi *ui = g_btlUi.ui;
    FUN_00289f18(&ui->objC, style, kind, value, options, 1);
    u32 icon = 0;
    if (kind == 0) icon = 0x3fa;
    else if (kind == 1) icon = 0x403;
    else if (kind == 2) icon = 0x40c;
    else if (kind == 3) icon = 0x415;
    else if (kind == 4) icon = 0x41f;
    SpriteTextureRect *rect = FUN_002bf4f8(21, icon);
    FUN_0028a0d0(ui, style, value, options, color, 0,
        (f32)(x + 39 + (s16)rect->textureWidth), (f32)(y + 17 + (s16)rect->textureHeight), 0.0f);
}
}
