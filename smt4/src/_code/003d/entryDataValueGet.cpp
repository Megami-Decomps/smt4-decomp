#include "common.h"

struct EntryData {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
    u32 value; // 0x08
};

struct Entry {
    u32 unk00;       // 0x00
    EntryData* data; // 0x04
};

extern "C" u32 entryDataValueGet(const Entry* entry)
{
    const EntryData* data = entry->data;
    if (data != 0) {
        return data->value;
    }
    return 0;
}
