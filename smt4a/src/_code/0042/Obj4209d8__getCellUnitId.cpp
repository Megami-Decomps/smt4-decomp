#include "common.h"

struct Cell {
    /* 0x000 */ u8 unk000[0x62];
    /* 0x62 */ u16 value;
    /* 0x64 */ u8 unkPad[0x1d0 - 0x64];
};

struct CellOwner {
    /* 0x0000 */ u8 unk0000[0x1ed4];
    /* 0x1ed4 */ Cell *cells;
};

struct CellView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ CellOwner *owner;
};

extern "C" {

/* Returns the unit id of the indexed cell. */
u32 _ZNK9Obj4209d813getCellUnitIdEi(const CellView *self, s32 index)
{
    return self->owner->cells[index].value;
}

} /* extern "C" */
