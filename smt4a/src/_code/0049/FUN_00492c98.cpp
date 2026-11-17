/* NON_MATCHING: retail passes nontrivial quad-color values through four extra stack copies; the current pointer contract omits those copies. */
#include "gfx/SpriteVertexColors.h"
#include "shard/W6_W6Match3_ExtendedRecordCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "shard/W6_W6Match7_QuadVectors.h"

extern "C" {
f32 jobGetScalarValue();
void efctSetSpeed(f32 scale);
void texDrawTableEntrySized(u32 flags, u32 table, s32 index, u32 second, u32 third,
    u32 firstExtra, u32 secondExtra, u32 fourth);
void *__aeabi_vec_ctor_nocookie_nodtor(QuadVector *values, void (*construct)(QuadVector *), u32 size, u32 count);
void quadSetOrderedVectors(const QuadVector *first, const QuadVector *second,
    const QuadVector *third, const QuadVector *fourth, s32 mode, s32 preserveW);
void gxResetColorQuadToWhite();

/* Dispatch the sprite's special mode, otherwise apply optional vertex colors around the draw. */
void FUN_00492c98(u32 flags, u32 table, s32 index, u32 second, u32 third,
    u32 firstExtra, u32 secondExtra, u32 fourth, s32 useColors)
{
    f32 previousScale = jobGetScalarValue();
    TextureTableEntryIV *sprite = asdTMTexTableEntryAt(table, index);
    ItemSpriteExtension *extension = reinterpret_cast<ItemSpriteExtension *>(sprite->placement);
    if (extension != NULL && extension->mode == 1) {
        texDrawTableEntrySized(flags, table, index, second, third, firstExtra, secondExtra, fourth);
        return;
    }
    if (useColors && extension != NULL) {
        QuadVector colors[4];
        __aeabi_vec_ctor_nocookie_nodtor(colors, vectorSetAllOne, sizeof(QuadVector), 4);
        colors[0] = reinterpret_cast<ItemSpriteExtension *>(sprite->placement)->colors[0];
        colors[1] = reinterpret_cast<ItemSpriteExtension *>(sprite->placement)->colors[1];
        colors[2] = reinterpret_cast<ItemSpriteExtension *>(sprite->placement)->colors[2];
        colors[3] = reinterpret_cast<ItemSpriteExtension *>(sprite->placement)->colors[3];
        quadSetOrderedVectors(&colors[0], &colors[1], &colors[2], &colors[3], 0, 0);
        efctSetSpeed(reinterpret_cast<ItemSpriteExtension *>(sprite->placement)->colorScale);
    }
    texTableRecordCallExtended(flags, table, index, second, third, firstExtra, secondExtra, fourth);
    efctSetSpeed(previousScale);
    gxResetColorQuadToWhite();
}
}
