/* NON_MATCHING: instructions match except the resource-address and zero-float literal pool entries are reversed. */
#include "common.h"
#include "shard/S1ListPanel.h"

extern "C" {
extern u32 g_layeredSpriteEffectResource;
void efctSetSpeed(f32 speed);
SpriteInfo *FUN_001834a4(u32 group, u32 sprite);
void FUN_001835b4(s32 layer, u32 group, u32 sprite, s32 x, s32 y, s32 priority);
void FUN_00162790(s32 layer, u32 color, const void *resource, f32 x, f32 y,
                  f32 offsetX, f32 offsetY, f32 speed);

// Draw the five sprite layers and place the accompanying effect at their anchor.
void uiDrawLayeredSpriteEffect(s32 x, s32 y, f32 speed)
{
    efctSetSpeed(speed);
    SpriteInfo *anchor = FUN_001834a4(0x1a, 0x18d);
    FUN_001835b4(2, 0x1a, 0x16f, anchor->x + x, anchor->y + y, 0x65);
    FUN_001835b4(2, 0x1a, 0x170, anchor->x + x, anchor->y + y, 0x65);
    FUN_001835b4(2, 0x1a, 0x26f, anchor->x + x, anchor->y + y, 0x65);
    FUN_001835b4(2, 0x1a, 0x270, anchor->x + x, anchor->y + y, 0x65);
    FUN_001835b4(2, 0x1a, 0x171, anchor->x + x, anchor->y + y, 0x65);
    SpriteInfo *effect = FUN_001834a4(0x1a, 0x178);
    FUN_00162790(2, 0xffffffff, &g_layeredSpriteEffectResource,
                  effect->x + anchor->x + x, anchor->y + effect->y + y, 0.0f, 0.0f, speed);
}
}
