#include "common.h"

struct ValueEntry {
    u32 unk00;       // 0x00
    u32 value;       // 0x04
};

struct ValueOwner {
    u32 unk00;        // 0x00
    ValueEntry* entry; // 0x04
};

extern "C" u32 valueOwnerGet(const ValueOwner* owner)
{
    const ValueEntry* entry = owner->entry;
    return entry ? entry->value : 0;
}
