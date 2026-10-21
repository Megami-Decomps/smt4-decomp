#include "common.h"

namespace { struct Entry { u8 padding[6]; s16 value; u8 tail[0xc]; }; struct Record { u8 padding[0x13c]; Entry *entries; u8 tail[8]; }; }

extern "C" {
/* Reads or updates the requested object state. */
extern Record g_keyedRecords[];
s32 keyedRecordGetEntryValue(u32 record, u32 entry)
{
    return g_keyedRecords[record].entries[entry].value;
}
}
