#include "common.h"

struct ObjectRegistryEntry {
    u32 key;       // 0x00
    void* object;  // 0x04
};

extern "C" ObjectRegistryEntry g_objectRegistry[64];

// Fill the first unused slot in the fixed-size object registry.
extern "C" void objectRegistryInsert(void* object, u32 key)
{
    ObjectRegistryEntry* entry = NULL;
    for (s32 index = 0; index < 64; ++index) {
        ObjectRegistryEntry* candidate = &g_objectRegistry[index];
        if (candidate->object == NULL) {
            entry = candidate;
            break;
        }
    }
    entry->object = object;
    entry->key = key;
}
