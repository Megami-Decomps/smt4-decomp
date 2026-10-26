/* NON_MATCHING: instructions match except the resource-address and zero-float literal pool entries are reversed. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern const u16 g_layeredSpriteEffectResource[];
void efctSetSpeed(f32 speed);

// Draw the five sprite layers and place the accompanying text at their anchor.
void uiDrawLayeredSpriteEffect(s32 x, s32 y, f32 speed)
{
    efctSetSpeed(speed);
    TextureTableEntryIV *anchor = asdTMTexTableEntryAt(0x1a, 0x18d);
    FUN_001835b4(2, 0x1a, 0x16f, anchor->x + x, anchor->y + y, 0x65);
    FUN_001835b4(2, 0x1a, 0x170, anchor->x + x, anchor->y + y, 0x65);
    FUN_001835b4(2, 0x1a, 0x26f, anchor->x + x, anchor->y + y, 0x65);
    FUN_001835b4(2, 0x1a, 0x270, anchor->x + x, anchor->y + y, 0x65);
    FUN_001835b4(2, 0x1a, 0x171, anchor->x + x, anchor->y + y, 0x65);
    TextureTableEntryIV *caption = asdTMTexTableEntryAt(0x1a, 0x178);
    textDrawString(2, 0xffffffff, (const char *)g_layeredSpriteEffectResource,
                  caption->x + anchor->x + x, anchor->y + caption->y + y, 0.0f, 0.0f, speed);
}
}
