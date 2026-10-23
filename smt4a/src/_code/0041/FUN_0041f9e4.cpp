/* NON_MATCHING: compiler duplicates the row-render call rather than merging it into retail's shared call; 71 versus 65 instructions. */
#include "common.h"
#include <stddef.h>

namespace {
struct MenuRowRecord { u8 data[0x80]; };
struct MenuRowWidget { u8 data[0x44]; };
struct MenuRowRefreshView {
    u8 unk000[0x13];
    u8 allowEmpty;
    u8 unk014[4];
    s32 visibleCount; // 0x018
    u8 unk01c[0x50];
    MenuRowRecord records[5]; // 0x06c
    u8 occupied[20]; // 0x2ec
    s32 firstIndex; // 0x300
    s32 pageOffset; // 0x304
    s32 selectedRow; // 0x308
    u8 unk30c[0x358];
    MenuRowWidget rows[2]; // 0x664
    u8 selection[1]; // 0x6ec
};
typedef char MenuRowRefreshLayoutCheck[offsetof(MenuRowRefreshView, records) == 0x6c && offsetof(MenuRowRefreshView, occupied) == 0x2ec && offsetof(MenuRowRefreshView, rows) == 0x664 && offsetof(MenuRowRefreshView, selection) == 0x6ec ? 1 : -1];
}
extern "C" {
const void *FUN_001834a4(u32 archive, s32 index);
void FUN_0041b360(MenuRowWidget *, MenuRowRecord *, const void *, s32, s32, s32);
void FUN_0041c45c(void *, const void *);

// Refresh the visible record rows and their selection indicator.
void FUN_0041f9e4(MenuRowRefreshView *menu)
{
    s32 baseIndex = 0x51;
    if (menu->visibleCount <= 1)
        baseIndex = 0x83;
    for (s32 row = 0; row < menu->visibleCount; ++row) {
        s32 recordIndex = menu->firstIndex + menu->pageOffset + row;
        const void *layout = FUN_001834a4(0x2b, baseIndex + row);
        s32 selected = menu->selectedRow == row;
        if (menu->occupied[recordIndex]) {
            FUN_0041b360(&menu->rows[row], &menu->records[recordIndex], layout,
                        recordIndex + 1, selected, 1);
        } else {
            s32 enabled = menu->allowEmpty || recordIndex < 1;
            FUN_0041b360(&menu->rows[row], NULL, layout,
                        recordIndex + 1, selected, enabled);
        }
    }
    const void *layout = FUN_001834a4(0x2b, menu->selectedRow + baseIndex);
    FUN_0041c45c(menu->selection, layout);
}
}
