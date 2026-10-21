#include "common.h"

struct IdCounter {
    s16 id; // 0x00: zero marks an unused entry
    u16 count; // 0x02: saturates at 0xffff
};
struct IdCounterTable {
    u8 unk0000[0x445c];
    IdCounter entries[16]; // 0x445c
};

// Increment an existing ID's counter, or claim the first unused entry.
extern "C" void FUN_00336b98(IdCounterTable *table, s32 id)
{
    for (s32 i = 0; i < 16; ++i) {
        IdCounter *entry = &table->entries[i];
        if (entry->id != id) {
            if (entry->id != 0)
                continue;
            entry->id = id;
        }
        if (entry->count < 0xffff)
            ++entry->count;
        return;
    }
}
