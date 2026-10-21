#include "common.h"

struct RegistryEntry {
    u32 value;  // 0x00
    u32 key;    // 0x04: zero marks a free slot
};

extern "C" {
extern RegistryEntry g_registrationEntries[64];

// Inserts a key/value pair into the first free registration slot.
void registrationEntryInsert(u32 key, u32 value)
{
    RegistryEntry* slot = NULL;
    for (s32 i = 0; i < 64; ++i) {
        RegistryEntry* entry = &g_registrationEntries[i];
        if (entry->key == 0) {
            slot = entry;
            break;
        }
    }
    slot->key = key;
    slot->value = value;
}
}
