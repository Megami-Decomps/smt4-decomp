#include "common.h"

struct GridCellFlags {
    u8 unk00[0x50];
    u32 flags; // 0x50
    u8 unk54[4];
    u16 state; // 0x58
    u8 unk5a[0xba];
};
struct FlagGrid {
    u8 unk00[0x1e98];
    GridCellFlags *cells; // 0x1e98
};
struct FlagGridOwner {
    void *vtable;
    FlagGrid *grid; // 0x04
};

// Test whether the indexed cell satisfies all four selection conditions.
extern "C" s32 FUN_0034d978(FlagGridOwner *owner, s32 index)
{
    GridCellFlags *cell = &owner->grid->cells[index];
    u32 flags = cell->flags;
    if ((flags & 2) && !(flags & 0x4000)) {
        u32 ready = cell->state & 0x800;
        if (ready)
            ready = (flags & 0x40001) != 0;
        return ready;
    }
    return 0;
}
