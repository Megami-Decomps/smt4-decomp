#include "common.h"

struct EntryState {
    /* 0x00 */ s32 value;
    /* 0x04 */ u8 unk04[2];
    /* 0x06 */ s8 enabled;
};

/* Marks both entry state values as unset. */
extern "C" void FUN_00348774(EntryState *entry)
{
    entry->value = -1;
    entry->enabled = -1;
}
