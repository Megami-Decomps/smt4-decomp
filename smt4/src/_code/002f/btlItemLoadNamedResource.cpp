#include "common.h"

struct ItemResourceRecord {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ char resourceName[1];
};

extern "C" {
const ItemResourceRecord* dataTable08Sub1GetRecord(u32 id);
s32 libc_strcmp(const char* left, const char* right);
void namedVariantTableGetEntries(u32 owner, const char* resourceName, u32 mode);

// Load an item's named resource unless the record uses the "0" sentinel.
void btlItemLoadNamedResource(u32 owner, u32 id, u32 mode)
{
    const ItemResourceRecord* record = dataTable08Sub1GetRecord(id);
    if (record != NULL && libc_strcmp(record->resourceName, "0") != 0)
        namedVariantTableGetEntries(owner, record->resourceName, mode);
}
}
