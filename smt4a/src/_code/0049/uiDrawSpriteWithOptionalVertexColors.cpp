/* NON_MATCHING: retail creates extra color-argument copies and a 188-byte frame versus 76 bytes here; the original color value/temporary ABI is unrecovered. */
#include "shard/S1ListPanel.h"
#include "shard/W6_W6Match7_QuadVectors.h"
#include "shard/W6_W6Match3_ExtendedRecordCall.h"
#include "gfx/SpriteVertexColors.h"


extern "C" {
SpriteInfo *asdTMTexTableEntryAt(u32, s32);
f32 jobGetScalarValue();
void efctSetSpeed(f32);
void FUN_00183bb0();
void vectorSetAllOne(QuadVector *);
void *__aeabi_vec_ctor_nocookie_nodtor(QuadVector *, void (*)(QuadVector *), u32, u32);
void quadSetOrderedVectors(const QuadVector *, const QuadVector *, const QuadVector *,
                  const QuadVector *, s32, s32);
void FUN_00185dd4(u32, u32, s32, u32, u32, u32, u32, u32);

void uiDrawSpriteWithOptionalVertexColors(s32 spriteId, s32 x, s32 y, u32 layer, s32 alpha, s32 useColors)
{
    SpriteInfo *sprite = asdTMTexTableEntryAt(0x13, spriteId);
    ItemSpriteExtension *extension = reinterpret_cast<ItemSpriteExtension *>(sprite->size);
    u32 width, height;
    if (extension != NULL && extension->mode == 1) {
        width = extension->width;
        height = extension->height;
    } else {
        width = sprite->bounds.width & 0x7fff;
        height = sprite->bounds.height & 0x7fff;
    }
    f32 previousAlpha = jobGetScalarValue();
    sprite = asdTMTexTableEntryAt(0x13, spriteId);
    extension = reinterpret_cast<ItemSpriteExtension *>(sprite->size);
    if (extension != NULL && extension->mode == 1) {
        FUN_00185dd4(2, 0x13, spriteId, x, y, width, height, layer);
        return;
    }
    if (useColors && extension != NULL) {
        QuadVector colors[4];
        __aeabi_vec_ctor_nocookie_nodtor(colors, vectorSetAllOne, sizeof(QuadVector), 4);
        colors[0] = reinterpret_cast<ItemSpriteExtension *>(sprite->size)->colors[0];
        colors[1] = reinterpret_cast<ItemSpriteExtension *>(sprite->size)->colors[1];
        colors[2] = reinterpret_cast<ItemSpriteExtension *>(sprite->size)->colors[2];
        colors[3] = reinterpret_cast<ItemSpriteExtension *>(sprite->size)->colors[3];
        quadSetOrderedVectors(&colors[0], &colors[1], &colors[2], &colors[3], 0, 0);
    }
    efctSetSpeed((f32)alpha * (1.0f / 255.0f));
    texTableRecordCallExtended(2, 0x13, spriteId, x, y, width, height, layer);
    efctSetSpeed(previousAlpha);
    FUN_00183bb0();
}
}
