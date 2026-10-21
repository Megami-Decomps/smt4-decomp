#include "common.h"

struct PairedEntryTable {
    u8 unk0000[0x4bc4];
    s32 entries[42]; // 0x4bc4: 21 pairs
};

extern "C" {
// Search both members of each stored pair for the requested value.
s32 pairedEntryTableContains(PairedEntryTable *table, s32 value)
{
    for (s32 index = 0; index < 42; index += 2) {
        if (table->entries[index] == value || table->entries[index + 1] == value) {
            return 1;
        }
    }
    return 0;
}
}
