#include "common.h"

struct EntryState {
    /* 0x00 */ u32 value;
    /* 0x04 */ u8 active;
    /* 0x05 */ u8 requested;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u32 first;
    /* 0x0c */ u32 second;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 complete;
};

/* Clears the entry's work values and status flags. */
extern "C" void FUN_0034066c(EntryState *entry)
{
    entry->value = 0;
    entry->active = 0;
    entry->requested = 0;
    entry->first = 0;
    entry->second = 0;
    entry->complete = 0;
}
