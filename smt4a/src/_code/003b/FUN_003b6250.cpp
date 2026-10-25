/* NON_MATCHING: Selection-ID table addressing groups its base offset differently. */
#include "common.h"
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "text/TextDraw.h"

extern "C" {
UniteWork *uniteGetWork();
void efctSetSpeed(f32 speed);
u8 recordGetModeForId(s32 recordId);
const UniteSelectionLayoutPrefixA *asdTMTexTableEntryAt(u32 group, u32 entry);
void largeGridDrawButtonStrip(UniteWork *work, s32 x, s32 y,
                              s32 selectedIndex, f32 speed);
extern u8 g_layeredSpriteEffectResource[];

f32 FUN_003b6250(s32 x, s32 y, f32 speed)
{
    UniteWork *work = uniteGetWork();
    u32 color = 0x9fe7ffffU;
    efctSetSpeed(speed);

    // The logical extent of the ID table is not recovered.
    const s16 *recordIds = reinterpret_cast<const s16 *>(work->unk0438);
    s32 mode = recordGetModeForId(recordIds[work->selectionA.selectedIndex]);
    if (mode == 1 || mode == 2 || mode == 6)
        color = 0xf5ff9fffU;

    const UniteSelectionLayoutPrefixA *strip = asdTMTexTableEntryAt(0x1a, 0x1af);
    largeGridDrawButtonStrip(work, strip->x + x, strip->y + y,
                            work->selectionA.selectedIndex, speed);
    efctSetSpeed(speed);
    const UniteSelectionLayoutPrefixA *effect = asdTMTexTableEntryAt(0x1a, 0x1a2);

    return textDrawString(3, color, (const char *)g_layeredSpriteEffectResource,
                       static_cast<f32>(effect->x + strip->x + x),
                       static_cast<f32>(strip->y + effect->y + y),
                       0.0f, 0.0f, speed);
}
}
