#include "common.h"

struct ResourceSlots {
    u8 unk0000[0x2134];
    void *entries[42]; // 0x2134
};

extern "C" {
// Store a resource in the first available slot.
void *resourceSlotsInsert(ResourceSlots *slots, void *resource)
{
    for (s32 index = 0; index < 42; ++index) {
        if (slots->entries[index] == NULL) {
            slots->entries[index] = resource;
            return resource;
        }
    }
    return NULL;
}
}
