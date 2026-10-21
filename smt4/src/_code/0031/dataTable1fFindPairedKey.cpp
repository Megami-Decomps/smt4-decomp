#include "common.h"

struct PairedKeyRecord {
    u16 second; // 0x00
    u16 first;  // 0x02
    u32 value;  // 0x04
};
struct PairedKeyTable {
    u32 size; // 0x00: total byte size including header
};

extern "C" {
PairedKeyTable* fileSlotGetBuffer(u32 slot);
s32 FUN_001e16bc(const void* key, const void* record);
void* libc_bsearch(const void* key, const void* base, u32 count, u32 size,
                   s32 (*compare)(const void*, const void*));

// Binary-searches table 0x1f using a pair of halfword keys.
PairedKeyRecord* dataTable1fFindPairedKey(u16 first, u16 second)
{
    PairedKeyTable* table = fileSlotGetBuffer(0x1f);
    u32 size = table->size;
    PairedKeyRecord* records = reinterpret_cast<PairedKeyRecord*>(table + 1);
    PairedKeyRecord key;
    key.first = first;
    key.second = second;
    return static_cast<PairedKeyRecord*>(libc_bsearch(
        &key, records, (size - sizeof(PairedKeyTable)) / sizeof(PairedKeyRecord),
        sizeof(PairedKeyRecord), FUN_001e16bc));
}
}
