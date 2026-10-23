/* NON_MATCHING: first cap selector spills to the stack; final segment-coordinate multiply is fused. */
#include "ui/SegmentedTextureBar.h"

extern "C" {
void FUN_002b0750(s32 layer, s32 group, u32 sprite, s32 x, s32 y, s32 width, s32 height, s32 order);
void FUN_002bf288(s32 layer, s32 group, u32 sprite, s32 x, s32 y, s32 order);
TexSprite *FUN_002bf4f8(u32 group, u32 sprite);

// Draw a twelve-part vertical indicator with independent cap and fill variants.
void FUN_002ec0fc(const SegmentedTextureBarOrigin *origin, s32 x, s32 y, u32 firstVariant,
                  u32 secondVariant, s32 fillVariant, u32 unused, s32 firstSegment, s32 segmentCount)
{
    s32 fillSegments = segmentCount - 3;
    if (fillSegments > 0) {
        FUN_002bf288(2, 0x39, 0x3e, origin->x + x, y, 0x6e);
        FUN_002bf288(2, 0x39, firstVariant != 0 ? 0x3c : 0x3a, origin->x + x, y, 0x6f);
        FUN_002bf288(2, 0x39, secondVariant != 0 ? 0x3d : 0x3b, origin->x + x, y, 0x6f);
        u32 sprite = fillVariant != 0 ? 0x40 : 0x3f;
        const TexSprite *texture = FUN_002bf4f8(0x39, sprite);
        const SegmentedTextureBarSize *size = reinterpret_cast<const SegmentedTextureBarSize *>(texture->frames);
        s32 segmentHeight = size->height / 12;
        FUN_002b0750(2, 0x39, sprite, origin->x + x, firstSegment * segmentHeight + y,
                     size->width, size->height - segmentHeight * fillSegments, 0x6f);
    }
}
}
