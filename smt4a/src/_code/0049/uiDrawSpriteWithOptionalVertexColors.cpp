/* NON_MATCHING: retail creates extra color-argument copies and a 188-byte frame versus 76 bytes here; retail passes the colors by value (shard/W6_W6Match7_QuadVectors.h) inside an inlined draw body
   with its own stack frame; this draft keeps the old pointer prototype (by value scores 142 against 136). */
#include "shard/W6_W6Match7_QuadVectors.h"
#include "shard/W6_W6Match3_ExtendedRecordCall.h"
#include "gfx/SpriteVertexColors.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"


extern "C" {
f32 jobGetScalarValue();
void efctSetSpeed(f32);
void gxResetColorQuadToWhite();
void quadSetOrderedVectors(const QuadVector *, const QuadVector *, const QuadVector *, // declcheck: local (draft keeps the pointer form)
                  const QuadVector *, s32, s32);
void texDrawTableEntrySized(u32, u32, s32, u32, u32, u32, u32, u32);

void uiDrawSpriteWithOptionalVertexColors(s32 spriteId, s32 x, s32 y, u32 layer, s32 alpha, s32 useColors)
{
    u32 width;
    u32 height;
    asdTMTexTableEntrySize(0x13, spriteId, &width, &height);
    f32 previousAlpha = jobGetScalarValue();
    TextureTableEntryIV *sprite = asdTMTexTableEntryAt(0x13, spriteId);
    ItemSpriteExtension *extension = reinterpret_cast<ItemSpriteExtension *>(sprite->placement);
    if (extension != NULL && extension->mode == 1) {
        texDrawTableEntrySized(2, 0x13, spriteId, x, y, width, height, layer);
        return;
    }
    if (useColors && extension != NULL) {
        QuadVector colors[4];
        colors[0] = reinterpret_cast<ItemSpriteExtension *>(sprite->placement)->colors[0];
        colors[1] = reinterpret_cast<ItemSpriteExtension *>(sprite->placement)->colors[1];
        colors[2] = reinterpret_cast<ItemSpriteExtension *>(sprite->placement)->colors[2];
        colors[3] = reinterpret_cast<ItemSpriteExtension *>(sprite->placement)->colors[3];
        quadSetOrderedVectors(&colors[0], &colors[1], &colors[2], &colors[3], 0, 0);
    }
    efctSetSpeed((f32)alpha * (1.0f / 255.0f));
    texTableRecordCallExtended(2, 0x13, spriteId, x, y, width, height, layer);
    efctSetSpeed(previousAlpha);
    gxResetColorQuadToWhite();
}
}
