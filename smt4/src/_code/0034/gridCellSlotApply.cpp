#include "common.h"

extern "C" {

typedef struct GridCell0034d884 {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ s16 id;
} GridCell0034d884;

typedef struct Grid0034d884 {
    /* 0x0000 */ u8 unk0000[0xc];
    /* 0x000c */ u32 slots[0x7a3];
    /* 0x1e98 */ u8 *cells;
} Grid0034d884;

typedef struct GridOwner0034d884 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Grid0034d884 *grid;
} GridOwner0034d884;

s32 FUN_0027dab0(Grid0034d884 *grid, GridCell0034d884 *cell);
Grid0034d884 *FUN_0027da30(Grid0034d884 *grid, s32 id);
void FUN_0027d9e8(Grid0034d884 *grid, u32 slot);

/* Finds a cell by index, resolves its slot, then applies the selected slot. */
void gridCellSlotApply(GridOwner0034d884 *owner, s32 index)
{
    GridCell0034d884 *cell = (GridCell0034d884 *)(owner->grid->cells + index * 0x114);
    s32 slot = FUN_0027dab0(owner->grid, cell);

    FUN_0027d9e8(owner->grid, FUN_0027da30(owner->grid, cell->id)->slots[slot]);
}

} /* extern "C" */
