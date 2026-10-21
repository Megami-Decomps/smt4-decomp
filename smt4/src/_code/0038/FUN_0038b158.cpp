#include "common.h"

struct EntryState {
    /* 0x00 */ s32 first;
    /* 0x04 */ s32 second;
    /* 0x08 */ s32 third;
    /* 0x0c */ u8 active;
    /* 0x0d */ u8 requested;
};

/* Clears the entry and both of its status flags. */
extern "C" void FUN_0038b158(EntryState *entry)
{
    entry->first = 0;
    entry->second = 0;
    entry->third = 0;
    entry->active = 0;
    entry->requested = 0;
}
