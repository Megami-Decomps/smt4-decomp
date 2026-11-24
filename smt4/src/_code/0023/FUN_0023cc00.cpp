#include "battle/BtlUiGlobal.h"
#include "battle/BtlPositionedRequests.h"
#include "gfx/SpriteTextureRect.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
/* Draws a battle widget and returns the queued popup's group. */
u32 FUN_0023cc00(BtlUi *, u32 kind, u32 style, u8 value, s8 options, u32 color, s32 x, s32 y)
{
    BtlUi *ui = g_btlUi.ui;
    btlUiSlotMeterStart(&ui->objC, style, kind, value, options, 1);
    u32 icon = 0;
    if (kind == 0) icon = 0x3fa;
    else if (kind == 1) icon = 0x403;
    else if (kind == 2) icon = 0x40c;
    else if (kind == 3) icon = 0x415;
    else if (kind == 4) icon = 0x41f;
    TextureTableEntryIV *rect = asdTMTexTableEntryAt(21, icon);
    return FUN_0028a0d0(ui, style, (f32)(x + 39 + (s16)rect->x), (f32)(y + 17 + (s16)rect->y), 0.0f, value,
        options, color, 0);
}
}
