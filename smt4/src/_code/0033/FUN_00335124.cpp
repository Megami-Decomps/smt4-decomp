#include "common.h"

struct EntryState {
    /* 0x00 */ u32 value;
    /* 0x04 */ u16 type;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u32 first;
    /* 0x0c */ u32 second;
    /* 0x10 */ u8 active;
};

/* Initializes an inactive entry with default type seven. */
extern "C" void FUN_00335124(EntryState *entry)
{
    entry->value = 0;
    entry->type = 7;
    entry->first = 0;
    entry->second = 0;
    entry->active = 0;
}
