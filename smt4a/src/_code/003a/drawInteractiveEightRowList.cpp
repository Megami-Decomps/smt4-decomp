#include "util/FUN_002a4894.h"
/* NON_MATCHING: owner/base-address allocation, row-valid flag initialization and highlight Boolean lowering differ; -O2 candidate. */
#include "shard/Shard0031.h"

struct EightRowListDraw {
    u8 unk0000[0x8e14];
    FlaggedEntry grid;
    u8 unk8e78[8];
    s32 entryCount, selectionLimit;
    u8 unk8e88[2];
    u8 selectionActive;
    u8 unk8e8b[0x21];
    u8 headerOverride;
};
extern "C" {
s32 resourceRunOperationIfUnblocked(FlaggedEntry *);
void FUN_003b6250(s32, s32, f32);
void uiDrawLayeredSpriteEffect(s32, s32, f32);
void FUN_003cbd04(EightRowListDraw *, u32, u32, s32, s32, s32, u32, f32);
void FUN_003cdeb0(EightRowListDraw *, u32, s32, s32, f32);
void efctSetSpeed(f32);

void drawInteractiveEightRowList(EightRowListDraw *work, u32 style, s32 interactive, s32 x, s32 y, f32 scale)
{
    resourceRunOperationIfUnblocked(&work->grid);
    s32 base = resourceRunOperationIfUnblocked(&work->grid);
    s32 selected = FUN_002a4894(reinterpret_cast<const Object *>(&work->grid));
    bool headerSelected = false;
    if (interactive && (base + selected >= work->selectionLimit || work->headerOverride)) {
        FUN_003b6250(x, y, scale);
        headerSelected = true;
    } else {
        uiDrawLayeredSpriteEffect(x, y, scale);
    }
    for (s32 row = 0; row < 8; ++row) {
        bool valid = resourceRunOperationIfUnblocked(&work->grid) + row < work->entryCount;
        if (!interactive || FUN_002a4894(reinterpret_cast<const Object *>(&work->grid)) != row || headerSelected || !work->selectionActive) {
            bool highlighted = FUN_002a4894(reinterpret_cast<const Object *>(&work->grid)) == row && !work->selectionActive && interactive;
            FUN_003cbd04(work, row, style, valid, x, y, highlighted, scale);
            efctSetSpeed(1.0f);
        }
    }
    if (!headerSelected && work->selectionActive && interactive)
        FUN_003cdeb0(work, style, x, y, scale);
}
}
