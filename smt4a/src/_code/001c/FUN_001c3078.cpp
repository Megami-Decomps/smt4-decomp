#include "common.h"

struct TableOwner {
    /* 0x00 */ u8 unk00[0x90];
    /* 0x90 */ u32 slots[16];
};

/* Slot word for index 0-15, otherwise 0. */
extern "C" u32 FUN_001c3078(const TableOwner *owner, s32 index)
{
    if (index > 15) {
        return 0;
    }
    return owner->slots[index];
}
