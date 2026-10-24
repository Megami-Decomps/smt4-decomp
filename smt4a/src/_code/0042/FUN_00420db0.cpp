#include "common.h"

struct Cell00420db0 {
    /* 0x000 */ u8 unk000[0x1f6];
    /* 0x1f6 */ u8 active;
    /* 0x1f7 */ u8 unk1f7[0x25];
    /* 0x21c */ u32 flags;
};

extern "C" {

/* Whether the cell is active and has its first flag set. */
s32 FUN_00420db0(void *self, const Cell00420db0 *cell)
{
    if (cell->active != 0) {
        u32 flags = cell->flags;
        u32 required = 1;
        if ((flags & required) == required)
            return 1;
    }
    return 0;
}

} /* extern "C" */
