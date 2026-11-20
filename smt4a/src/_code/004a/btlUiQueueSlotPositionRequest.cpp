#include "battle/BtlUiGlobal.h"
#include "battle/BtlPositionedRequestsA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void btlUiSlotTrackerEnableSlot(BtlUiObjCA *, u32, s32, u32, u32, s32);
}

/* Adds the slot layout's origin and submits the request at zero depth. */
extern "C" u32 btlUiQueueSlotPositionRequest(BtlUiA *, s32 category, u32 text, u8 color,
                             u8 style, s32 enabled, s32 x, s32 y)
{
    BtlUiA *ui = g_btlUi.ui;
    btlUiSlotTrackerEnableSlot(&ui->objC, text, category, color, style, 1);
    u32 frame = 0;
    if (category == 0) frame = 0x3FA;
    else if (category == 1) frame = 0x403;
    else if (category == 2) frame = 0x40C;
    else if (category == 3) frame = 0x415;
    else if (category == 4) frame = 0x41F;
    const TextureTableEntryIV *sprite = asdTMTexTableEntryAt(13, frame);
    return btlUiQueuePositionedRequest(ui, text,
                      f32(sprite->x + x + 39), f32(sprite->y + y + 17), 0.0f,
                      color, style, enabled, 0);
}
