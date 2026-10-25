/* NON_MATCHING: retail passes nontrivial quad-color values through four extra stack copies; the current pointer contract omits those copies. */
#include "shard/S1ListPanel.h"
#include "gfx/SpriteVertexColors.h"
#include "shard/W6_W6Match3_ExtendedRecordCall.h"

extern "C" {
f32 jobGetScalarValue();
void efctSetSpeed(f32 scale);
SpriteInfo *FUN_001834a4(u32 table, s32 index);
void FUN_00185dd4(u32 flags, u32 table, s32 index, u32 second, u32 third,
    u32 firstExtra, u32 secondExtra, u32 fourth);
void vectorSetAllOne(QuadVector *value);
void *__aeabi_vec_ctor_nocookie_nodtor(QuadVector *values, void (*construct)(QuadVector *), u32 size, u32 count);
void quadSetOrderedVectors(const QuadVector *first, const QuadVector *second,
    const QuadVector *third, const QuadVector *fourth, s32 mode, s32 preserveW);
void FUN_00183bb0();

/* Dispatch the sprite's special mode, otherwise apply optional vertex colors around the draw. */
void FUN_00492c98(u32 flags, u32 table, s32 index, u32 second, u32 third,
    u32 firstExtra, u32 secondExtra, u32 fourth, s32 useColors)
{
    f32 previousScale = jobGetScalarValue();
    SpriteInfo *sprite = FUN_001834a4(table, index);
    ItemSpriteExtension *extension = reinterpret_cast<ItemSpriteExtension *>(sprite->size);
    if (extension != NULL && extension->mode == 1) {
        FUN_00185dd4(flags, table, index, second, third, firstExtra, secondExtra, fourth);
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
        efctSetSpeed(reinterpret_cast<ItemSpriteExtension *>(sprite->size)->colorScale);
    }
    texTableRecordCallExtended(flags, table, index, second, third, firstExtra, secondExtra, fourth);
    efctSetSpeed(previousScale);
    FUN_00183bb0();
}
}
