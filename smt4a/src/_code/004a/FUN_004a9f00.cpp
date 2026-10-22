/* NON_MATCHING: the zero-depth VFP constant is loaded two instructions earlier than retail. */
#include "battle/btlUI.h"
#include "shard/S1ListPanel.h"

extern "C" {
extern BtlUiGlobalsA g_btlUi;
SpriteInfo *FUN_001834a4(u32, u32);
void FUN_00336aec(BtlUiObjCA *, u32, s32, u32, u32, s32);
void FUN_004a9588(BtlUiA *, u32, u32, u32, u32, s32, f32, f32, f32);
}

extern "C" void FUN_004a9f00(u32, s32 category, u32 text, u32 color,
                             u32 style, u32 value, s32 x, s32 y)
{
    BtlUiA *ui = g_btlUi.ui;
    FUN_00336aec(&ui->objC, text, category, color, style, 1);
    u32 frame = 0;
    if (category == 0) frame = 0x3FA;
    else if (category == 1) frame = 0x403;
    else if (category == 2) frame = 0x40C;
    else if (category == 3) frame = 0x415;
    else if (category == 4) frame = 0x41F;
    const SpriteInfo *sprite = FUN_001834a4(13, frame);
    FUN_004a9588(ui, text, color, style, value, 0,
                 f32(sprite->x + x + 39), f32(sprite->y + y + 17), 0.0f);
}
