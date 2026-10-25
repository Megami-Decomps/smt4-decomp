/* NON_MATCHING: retail keeps the 0.2 factor in s17 and the shared draw tail laid out differently (190 vs 184 rows); the row drawing logic is the same. */
#include "common.h"
#include "shard/TextureDrawCall.h"

extern "C" {

/* The list menu's work area (only the fields used here, by their offsets). */
typedef struct ListMenuWork {
    /* 0x0000 */ u8 unk0000[0x2E0];
    /* 0x02E0 */ u8 slide[0x20];
    /* 0x0300 */ f32 slideSpeed;
    /* 0x0304 */ u8 unk0304[0xF8];
    /* 0x03FC */ s32 scroll;
    /* 0x0400 */ u8 unk0400[0x8760];
    /* 0x8B60 */ u16 pageIds[8];
    /* 0x8B70 */ u16 slotIds[0x100];
    /* 0x8D70 */ u8 unk8d70[0xA4];
    /* 0x8E14 */ u8 list[0x68];
    /* 0x8E7C */ s32 selected;
    /* 0x8E80 */ u8 unk8e80[8];
    /* 0x8E88 */ s32 rowIds[1];
} ListMenuWork;

s32 objectApplyIfUnblocked(void *list);
s32 resourceRunOperationIfUnblocked(void *list);
s32 FUN_002a4894(void *list);
s32 vec2GetXInt(const void *vector);
s32 vec2GetYInt(const void *vector);
void efctSetSpeed(f32 speed);

/* Draws one row of the list menu at the offset (`*x`, `*y`) + (`offsetX`, `offsetY`): a plain row
 * far from the selection, otherwise the highlighted row, nudged and animated at `scale` by the
 * scroll position and by the current layout mode `mode`. */
void FUN_003b6354(f32 scale, ListMenuWork *work, s32 row, s32 mode, s32 selectedRow, s32 offsetX, s32 offsetY, s32 *x,
                  s32 *y, s8 *shifted)
{
    if (selectedRow - work->selected > row) {
        FUN_001835b4(2, 0x1A, 0x172, *x + offsetX, *y + offsetY, 0x65);
        return;
    }
    if (work->selected < objectApplyIfUnblocked(work->list) && row == selectedRow) {
        if (mode != 1) {
            if ((mode == 2 || mode == 3) && *shifted != 0) {
                *y = work->scroll * -3 + *y;
                FUN_001835b4(2, 0x1A, 0x171, *x + offsetX, *y + offsetY, 0x65);
                return;
            }
        } else if (work->scroll < 1) {
            efctSetSpeed((f32)(1 - work->scroll) * scale);
        }
    } else if (mode != 1) {
        if (mode != 2) {
            if (mode == 3 && work->scroll < 6) {
                if (*shifted != 0) {
                    *y = work->scroll * -3 + *y;
                }
                if (row == work->rowIds[work->selected]) {
                    efctSetSpeed((f32)(5 - work->scroll) * 0.2f * scale);
                }
            }
        } else if (work->scroll < 6) {
            s32 base = resourceRunOperationIfUnblocked(work->list);
            s32 index = FUN_002a4894(work->list);

            if (*shifted != 0) {
                *y = work->scroll * -3 + *y;
            }
            if (work->pageIds[row] == work->slotIds[index + base]) {
                efctSetSpeed((f32)(5 - work->scroll) * 0.2f * scale);
            }
        }
    } else if (work->scroll > 0) {
        s32 base = resourceRunOperationIfUnblocked(work->list);
        s32 index = FUN_002a4894(work->list);

        if (work->pageIds[row] == work->slotIds[index + base]) {
            *x = vec2GetXInt(work->slide) + *x;
            *y = vec2GetYInt(work->slide) + *y;
            efctSetSpeed(work->slideSpeed * scale);
        }
    }
    FUN_001835b4(2, 0x1A, 0x171, *x + offsetX, *y + offsetY, 0x65);
}

}
