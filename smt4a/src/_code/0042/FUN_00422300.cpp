#include "common.h"

struct EntryState {
    /* 0x00 */ u8 unk00[16];
    /* 0x10 */ s32 value;
};

/* Clears the entry's state value. */
extern "C" void FUN_00422300(EntryState *entry)
{
    entry->value = 0;
}
