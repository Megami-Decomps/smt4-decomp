#include "battle/BtlUiGlobal.h"
#include "gfx/SpriteTextureRect.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void FUN_00289f18(BtlUiObjC *widget, u32 style, u32 kind, u32 value, u32 options, u32 enabled);
void FUN_0028a0d0(BtlUi *ui, u32 style, f32 x, f32 y, f32 z, u32 value, u32 options, u32 color, u32 flags);

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
    TextureTableEntryIV *rect = asdTMTexTableEntryAt(21, icon);
    FUN_0028a0d0(ui, style, (f32)(x + 39 + (s16)rect->x), (f32)(y + 17 + (s16)rect->y), 0.0f, value,
        options, color, 0);
}
}
