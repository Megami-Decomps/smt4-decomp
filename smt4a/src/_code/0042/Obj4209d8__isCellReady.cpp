#include "common.h"

struct GridCell {
    /* 0x000 */ u8 unk000[0x50];
    /* 0x050 */ u32 flags;
    /* 0x054 */ u8 unk054[0xc];
    /* 0x060 */ u16 state;
    /* 0x062 */ u8 unk062[0x16e];
};

struct FlagGrid {
    /* 0x0000 */ u8 unk0000[0x1ed4];
    /* 0x1ed4 */ GridCell *cells;
};

struct FlagGridOwner {
    /* 0x00 */ void *vtable;
    /* 0x04 */ FlagGrid *grid;
};

// Test whether the indexed cell satisfies all the selection conditions.
extern "C" s32 _ZNK9Obj4209d811isCellReadyEi(FlagGridOwner *owner, s32 index)
{
    GridCell *cell = &owner->grid->cells[index];
    u32 flags = cell->flags;
    if ((flags & 2) && !(flags & 0x200000) && !(flags & 0x4000) && (cell->state & 0x800))
        return (flags & 0x40001) != 0;
    return 0;
}
