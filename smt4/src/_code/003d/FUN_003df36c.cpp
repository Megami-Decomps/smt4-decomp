#include "common.h"

struct ValueEntry {
    u32 unk00;       // 0x00
    u32 value;       // 0x04
};

struct ValueHandle {
    u32 unk00;       // 0x00
    ValueEntry* entry; // 0x04
};

extern "C" u32 FUN_003df36c(const ValueHandle* handle)
{
    const ValueEntry* entry = handle->entry;
    return entry != 0 ? entry->value : 0;
}
