/* NON_MATCHING: 146 lines. The selected-row modes test mode 1 first and the other rows switch on the mode (retail's
 * compare chain, one 0.2 constant in s17 for modes 2 and 3, `<= 5`/`>= 1` limits); the slide sprite's opacity is read
 * through vec2GetSpeed (armlink-inlined `vldr s0, [r0, #32]`). Left: the row and the stack parameters are allocated
 * differently (retail: row in sl, offsets in r8/r9), the list and selection addresses take each other's stack slots,
 * the page-id address is kept in a stack slot, and the final draw shares the shifted-row draw's tail in retail. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "ui/UiSpriteApi.h"

extern "C" {

/* The list menu's work area (only the fields used here, by their offsets). */
typedef struct ListMenuWork {
    /* 0x0000 */ u8 unk0000[0x2E0];
    /* 0x02E0 */ UiSpriteState slide;
    /* 0x036C */ u8 unk036C[0x90];
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

s32 gridNavigationGetItemCount(void *list);
s32 resourceRunOperationIfUnblocked(void *list);
s32 listCursorGetRowIfUnblocked(void *list);
void efctSetSpeed(f32 speed);

/* Draws one row of the list menu at the offset (`*x`, `*y`) + (`offsetX`, `offsetY`): a plain row
 * far from the selection, otherwise the highlighted row, nudged and animated at `scale` by the
 * scroll position and by the current layout mode `mode`. */
void FUN_003b6354(f32 scale, ListMenuWork *work, s32 row, s32 mode, s32 selectedRow, s32 offsetX, s32 offsetY, s32 *x,
                  s32 *y, s8 *shifted)
{
    if (selectedRow - work->selected > row) {
        texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x172, *x + offsetX, *y + offsetY, 0x65);
        return;
    }
    if (work->selected < gridNavigationGetItemCount(work->list) && row == selectedRow) {
        if (mode == 1) {
            if (work->scroll < 1)
                efctSetSpeed((f32)(1 - work->scroll) * scale);
        } else if ((mode == 2 || mode == 3) && *shifted != 0) {
            *y = work->scroll * -3 + *y;
            texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x171, *x + offsetX, *y + offsetY, 0x65);
            return;
        }
    } else {
        switch (mode) {
        case 1:
            if (work->scroll >= 1) {
                s32 base = resourceRunOperationIfUnblocked(work->list);
                s32 index = listCursorGetRowIfUnblocked(work->list);

                if (work->pageIds[row] == work->slotIds[index + base]) {
                    *x = vec2GetXInt(&work->slide) + *x;
                    *y = vec2GetYInt(&work->slide) + *y;
                    efctSetSpeed(vec2GetSpeed(&work->slide) * scale);
                }
            }
            break;
        case 2:
            if (work->scroll <= 5) {
                s32 base = resourceRunOperationIfUnblocked(work->list);
                s32 index = listCursorGetRowIfUnblocked(work->list);

                if (*shifted != 0) {
                    *y = work->scroll * -3 + *y;
                }
                if (work->pageIds[row] == work->slotIds[index + base]) {
                    efctSetSpeed((f32)(5 - work->scroll) * 0.2f * scale);
                }
            }
            break;
        case 3:
            if (work->scroll <= 5) {
                if (*shifted != 0) {
                    *y = work->scroll * -3 + *y;
                }
                if (row == work->rowIds[work->selected]) {
                    efctSetSpeed((f32)(5 - work->scroll) * 0.2f * scale);
                }
            }
            break;
        }
    }
    texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x171, *x + offsetX, *y + offsetY, 0x65);
}

}
