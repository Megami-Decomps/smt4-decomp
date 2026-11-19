#include "common.h"
#include <stdio.h>
#include "shard/W9_W9Match8_WorkRecords.h"

static __inline TextLayoutContextIV *ownerContext(void *owner)
{
    return reinterpret_cast<TextLayoutContextIV *>(reinterpret_cast<u8 *>(owner) + 0xC8);
}

extern "C" {
TextLayoutEntryPrefixIV *FUN_002bf4f0(TextLayoutContextIV *context, s32 id);
s32 drawTextAtRelativePosition(TextLayoutContextIV *context, s32 origin,
                               s32 x, s32 y, s32 flags, s32 style,
                               u32 parameterHigh, u32 parameterLow,
                               u8 *text);

/* Draws a two-digit number at a layout entry, offset by the shared number layout. */
void FUN_0022d9c8(void *owner, s32 value, s32 index, s32 alternateLayout,
                  u32 parameterLow, u32 parameterHigh)
{
    TextLayoutEntryPrefixIV *position;
    TextLayoutEntryPrefixIV *offset;

    if (!(alternateLayout != 0)) {
        position = FUN_002bf4f0(ownerContext(owner), index + 0x40E);
        offset = FUN_002bf4f0(ownerContext(owner), 0x489);
    } else {
        position = FUN_002bf4f0(ownerContext(owner), index + 0x42F);
        offset = FUN_002bf4f0(ownerContext(owner), 0x497);
    }

    const s32 x = static_cast<s32>(position->x) + offset->x;
    const s32 y = static_cast<s32>(position->y) + offset->y;

    char text[32];
    sprintf(text, "%2d", value);
    drawTextAtRelativePosition(ownerContext(owner), 0, x, y, 0, 7,
                               parameterHigh, parameterLow, (u8 *)text);
}
}
