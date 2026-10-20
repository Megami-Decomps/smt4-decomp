#include "common.h"

extern "C" {

typedef struct Cell {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
} Cell;

void FUN_0030ee42(u8 *member);
s32 FUN_0030ee34(void);
Cell *FUN_0030ee2c(void);

typedef struct Owner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 member04[1];
} Owner;

/* Returns field 0x4 of the cell FUN_0030ee2c yields for the member at 4, or 0 when FUN_0030ee34 reports it empty. */
u32 FUN_001240f6(Owner *owner)
{
    Cell *cell;

    FUN_0030ee42(owner->member04);
    if (FUN_0030ee34() != 0) {
        return 0;
    }
    FUN_0030ee42(owner->member04);
    cell = FUN_0030ee2c();
    return cell->value;
}

} /* extern "C" */
