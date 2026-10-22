#include "common.h"
#include <stddef.h>

struct PrimaryInstanceEntry {
    /* 0x00 */ u32 data;
    /* 0x04 */ u8 unk04[0x18];
    /* 0x1C */ s32 id;
    /* 0x20 */ void *instance;
    /* 0x24 */ u8 unk24[4];
};
struct SecondaryInstanceEntry {
    /* 0x00 */ u32 data;
    /* 0x04 */ s32 id;
    /* 0x08 */ void *instance;
    /* 0x0C */ u8 unk0C[4];
};
struct InstanceCache {
    /* 0x0000 */ u8 unk0000[0x190];
    /* 0x0190 */ PrimaryInstanceEntry primary[50];
    /* 0x0960 */ SecondaryInstanceEntry secondary[109];
    /* 0x1030 */ u8 unk1030[0xCC8];
    /* 0x1CF8 */ void *parameters;
};
typedef char InstanceCachePrimaryCheck[offsetof(InstanceCache, primary) == 0x190 ? 1 : -1];
typedef char InstanceCacheSecondaryCheck[offsetof(InstanceCache, secondary) == 0x960 ? 1 : -1];
typedef char InstanceCacheParametersCheck[offsetof(InstanceCache, parameters) == 0x1CF8 ? 1 : -1];

extern "C" {
void *FUN_00349fc0(void *parameters, u32 data);

/* Creates a missing cached instance for the first matching id in either bank. */
void FUN_003d9f74(InstanceCache *cache, s32 id)
{
    for (s32 i = 0; i < 50; ++i) {
        PrimaryInstanceEntry *entry = &cache->primary[i];
        if (entry->id == id) {
            if (entry->instance == NULL) {
                entry->instance = FUN_00349fc0(cache->parameters, entry->data);
            }
            return;
        }
    }
    for (s32 i = 0; i < 109; ++i) {
        SecondaryInstanceEntry *entry = &cache->secondary[i];
        if (entry->id == id) {
            if (entry->instance == NULL) {
                entry->instance = FUN_00349fc0(cache->parameters, entry->data);
            }
            return;
        }
    }
}
}
