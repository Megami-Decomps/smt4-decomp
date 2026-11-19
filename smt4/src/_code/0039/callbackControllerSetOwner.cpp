#include "common.h"

struct EntryState {
    /* 0x00 */ u8 unk00[12];
    /* 0x0c */ s32 value;
};

/* Stores the entry's state value. */
extern "C" void callbackControllerSetOwner(EntryState *entry, s32 value)
{
    entry->value = value;
}
