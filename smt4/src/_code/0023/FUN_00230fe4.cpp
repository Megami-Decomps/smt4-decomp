/* NON_MATCHING: the by-value argument copies now match; retail copies the extension's colors into the array
   through VFP registers (vldmia/vstmia) where the build splits them into integer transfers, and the callee's
   symbol is still the C name of _Z21quadSetOrderedVectors10QuadVectorS_S_S_ii. */
#include "shard/S1ListPanel.h"
#include "gfx/SpriteVertexColors.h"
#include "shard/W6_W6Match3_ExtendedRecordCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "shard/W6_W6Match7_QuadVectors.h"

extern "C" {
f32 jobGetScalarValue();
void efctSetSpeed(f32 scale);
void uiDrawTableTextureSized(u32 flags, u32 table, s32 index, u32 second, u32 third,
    u32 firstExtra, u32 secondExtra, u32 fourth);
void gxResetColorQuadToWhite();

/* Dispatch the sprite's special mode, otherwise apply optional vertex colors around the draw. */
void FUN_00230fe4(u32 flags, u32 table, s32 index, u32 second, u32 third,
    u32 firstExtra, u32 secondExtra, u32 fourth, s32 useColors)
{
    f32 previousScale = jobGetScalarValue();
    TextureTableEntryIV *sprite = asdTMTexTableEntryAt(table, index);
    ItemSpriteExtension *extension = reinterpret_cast<ItemSpriteExtension *>(sprite->placement);
    if (extension != NULL && extension->mode == 1) {
        uiDrawTableTextureSized(flags, table, index, second, third, firstExtra, secondExtra, fourth);
        return;
    }
    if (useColors && extension != NULL) {
        QuadVector colors[4];
        colors[0] = reinterpret_cast<ItemSpriteExtension *>(sprite->placement)->colors[0];
        colors[1] = reinterpret_cast<ItemSpriteExtension *>(sprite->placement)->colors[1];
        colors[2] = reinterpret_cast<ItemSpriteExtension *>(sprite->placement)->colors[2];
        colors[3] = reinterpret_cast<ItemSpriteExtension *>(sprite->placement)->colors[3];
        quadSetOrderedVectors(colors[0], colors[1], colors[2], colors[3], 0, 0);
        efctSetSpeed(reinterpret_cast<ItemSpriteExtension *>(sprite->placement)->colorScale);
    }
    texTableRecordCallExtended(flags, table, index, second, third, firstExtra, secondExtra, fourth);
    efctSetSpeed(previousScale);
    gxResetColorQuadToWhite();
}
}
